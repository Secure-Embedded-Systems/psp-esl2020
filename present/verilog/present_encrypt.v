module PRESENT_ENCRYPT (
        output [63:0] odat,   // data output port
        input  [63:0] idat,   // data input port
        input  [79:0] key,    // key input port
        input         load,   // data load command
        input         clk     // clock
    );

//---------wires, registers----------
reg  [79:0] kreg;               // key register
reg  [63:0] dreg;               // data register
reg  [4:0]  round;              // round counter
wire [63:0] dat1,dat2,dat3;     // intermediate data
wire [79:0] kdat1,kdat2;        // intermediate subkey data


//---------combinational processes----------

assign dat1 = dreg ^ kreg[79:16];        // add round key
assign odat = dat1;                      // output ciphertext

// key update
assign kdat1        = {kreg[18:0], kreg[79:19]}; // rotate key 61 bits to the left
assign kdat2[14:0 ] = kdat1[14:0 ];
assign kdat2[19:15] = kdat1[19:15] ^ round;  // xor key data and round counter
assign kdat2[75:20] = kdat1[75:20];


//---------instantiations--------------------

// instantiate 16 substitution boxes (s-box) for encryption
genvar i;
generate
    for (i=0; i<64; i=i+4) begin: sbox_loop
       PRESENT_ENCRYPT_SBOX USBOX( .odat(dat2[i+3:i]), .idat(dat1[i+3:i]) );
    end
endgenerate

// instantiate pbox (p-layer)
PRESENT_ENCRYPT_PBOX UPBOX    ( .odat(dat3), .idat(dat2) );

// instantiate substitution box (s-box) for key expansion
PRESENT_ENCRYPT_SBOX USBOXKEY ( .odat(kdat2[79:76]), .idat(kdat1[79:76]) );


//---------sequential processes----------

// Load data
always @(posedge clk)
begin
   if (load)
      dreg <= idat;
   else
      dreg <= dat3;
end

// Load/reload key into key register
always @(posedge clk)
begin
   if (load)
      kreg <= key;
   else
      kreg <= kdat2;
end

// Round counter
always @(posedge clk)
begin
   if (load)
      round <= 1;
   else
      round <= round + 1;
end


endmodule

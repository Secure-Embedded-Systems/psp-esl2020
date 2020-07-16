module simon(
	input clk, 
	input rst,
	input encNdec,
	input [127:0] dataIn,
	input [63:0] key,
	output reg done,
	output [127:0] dataOut
	);

reg [63:0] left_beg;
reg [63:0] right_beg;
wire [63:0] left_end_enc;
wire [63:0] right_end_enc;
wire [63:0] left_end_dec;
wire [63:0] right_end_dec;
wire [63:0] s1_enc;
wire [63:0] s2_enc;
wire [63:0] s8_enc;
wire [63:0] s1_dec;
wire [63:0] s2_dec;
wire [63:0] s8_dec;
reg [6:0] cnt;


generate
	genvar i;
	for (i = 1; i < 64; i = i + 1)
	begin: S1_gen 
		assign s1_enc[i] = left_beg[i-1];
		assign s1_dec[i] = right_beg[i-1];
	end
endgenerate
assign s1_enc[0] = left_beg[63];
assign s1_dec[0] = right_beg[63];

generate
//	genvar i;
	for (i = 2; i < 64; i = i + 1)
	begin: S2_gen
		assign s2_enc[i] = left_beg[i-2];
		assign s2_dec[i] = right_beg[i-2];
	end
endgenerate
assign s2_enc[0] = left_beg[62];
assign s2_enc[1] = left_beg[63];
assign s2_dec[0] = right_beg[62];
assign s2_dec[1] = right_beg[63];

generate
//	genvar i;
	for (i = 8; i < 64; i = i + 1)
	begin: S8_gen
		assign s8_enc[i] = left_beg[i-8];
		assign s8_dec[i] = right_beg[i-8];
	end
endgenerate
assign s8_enc[0] = left_beg[56];	assign s8_dec[0] = right_beg[56];
assign s8_enc[1] = left_beg[57];	assign s8_dec[1] = right_beg[57];
assign s8_enc[2] = left_beg[58];	assign s8_dec[2] = right_beg[58];
assign s8_enc[3] = left_beg[59];	assign s8_dec[3] = right_beg[59];
assign s8_enc[4] = left_beg[60];	assign s8_dec[4] = right_beg[60];
assign s8_enc[5] = left_beg[61];	assign s8_dec[5] = right_beg[61];
assign s8_enc[6] = left_beg[62];	assign s8_dec[6] = right_beg[62];
assign s8_enc[7] = left_beg[63];	assign s8_dec[7] = right_beg[63];

/*
generate
	genvar i;
	for (i = 0; i < 64; i = i + 1)
	begin: leftBeg_gen
		assign left_beg[i] =  dataIn[i+64]; 
	end
endgenerate

generate
	genvar i;
	for (i = 0; i < 64; i = i + 1)
	begin: rightBeg_gen
		assign right_beg[i] = dataIn[i];
	end
endgenerate
*/
generate
//	genvar i;
	for (i = 0; i < 64; i = i + 1)
	begin: end_gen
		assign left_end_enc[i] = right_beg[i] ^ (s1_enc[i] & s8_enc[i]) ^ (s2_enc[i]) ^ key[i];
		assign right_end_enc[i] = left_beg[i];
		assign right_end_dec[i] = left_beg[i] ^ (s1_dec[i] & s8_dec[i]) ^ (s2_dec[i]) ^ key[i];
		assign left_end_dec[i] = right_beg[i];
	end
endgenerate


generate
//	genvar i;
	for (i = 0; i < 64; i = i + 1)
	begin: ct_gen
		assign dataOut[i] = encNdec ? right_end_enc[i] : right_end_dec[i];
		assign dataOut[i+64] = encNdec ? left_end_enc[i] : left_end_dec[i];
	end
endgenerate

always @(posedge clk) begin
	if (rst) begin
		// reset
		left_beg <= dataIn[127:64];
		right_beg <= dataIn[63:0];
		cnt <= 7'h00;
		done <= 1'b0;
	end
	else begin
		cnt <= cnt + 7'h01;
		done <= cnt==7'd67;
		if (encNdec == 1'b0) begin
			left_beg <= left_end_dec;
			right_beg <= right_end_dec;
		end
		else begin
			left_beg <= left_end_enc;
			right_beg <= right_end_enc;
		end
	end
end
// assign left_beg = dataIn[127:64];
// assign right_beg = dataIn[63:0];
// assign s1_enc = {left_beg[62:0],left_beg[63]};
// assign s2_enc = {left_beg[61:0],left_beg[63:62]};
// assign s8_enc = {left_beg[55:0],left_beg[63:56]};
// assign left_end_enc = right_beg ^ (s1_enc & s8_enc) ^ (s2_enc) ^ key;
// assign right_end_enc = left_beg;

// assign dataOut = {left_end_enc,right_end_enc};


endmodule

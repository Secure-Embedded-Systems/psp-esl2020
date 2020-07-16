module simon_key (
	input clk,
	input rst,
	input [63:0] inLeft,
	input [63:0] inRight,
	output [63:0] out, 
	output done
 	);

wire [63:0] s3;
wire [63:0] s4;
wire [63:0] t1;
wire [63:0] t2;
wire [61:0] z;
reg [61:0] z_reg;
reg [63:0] ki1;
reg [63:0] ki;
reg [6:0] cnt;


generate
	genvar i;
	for (i = 0; i < 61; i = i + 1)
	begin: S3_gen
		assign s3[i] = ki1[i+3]; 
	end
endgenerate
assign s3[61] = ki1[0];
assign s3[62] = ki1[1];
assign s3[63] = ki1[2];


generate
	// genvar i;
	for (i = 0; i < 63; i = i + 1)
	begin: S4_gen
		assign s4[i] = s3[i+1]; 
	end
endgenerate
assign s4[63] = s3[0];

assign t1 = ki ^ s3;
assign t2 = t1 ^ s4;


generate
	// genvar i;
	for (i = 0; i < 61; i = i + 1)
	begin: Z_gen
		assign z[i] = z_reg[i+1];
	end
endgenerate
assign z[61] = z_reg[0]; 


always @(posedge clk) begin
	if (rst) begin
		// reset
		ki1 <= inLeft;
		ki <= inRight;
		cnt <= 7'b0;
		z_reg <= 64'h3369f885192c0ef5;
	end
	else begin
		z_reg <= z;
		cnt <= cnt + 7'h01;
		ki <= ki1;
		ki1 <= t2 ^ 64'hFFFFFFFFFFFFFFFC ^ z_reg[0];
	end
end

assign out = ki;
assign done = cnt==7'd67;

endmodule

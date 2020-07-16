`timescale 1 ns/1 ns

module pwmtb;

   reg clk;
   reg rst;
   reg [7:0] duty;
   wire pulse;

   pwmtop TOP(duty, pulse, clk, rst);

   always
     #25 clk = ~clk;
   
   initial
     begin
	duty    = 8'd64;       
	clk     = 1'b0;
	#2  rst = 1'b1;
	#25 rst = 1'b0;
     end

endmodule

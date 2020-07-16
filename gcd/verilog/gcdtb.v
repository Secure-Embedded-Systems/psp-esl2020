`timescale 1 ns/1 ns

module gcdtb;

   reg clk;
   reg rst;
   reg [3:0] a;
   reg [3:0] b;
   reg 	     start;

   wire [3:0] q;
   wire       done;

   gcdtop TOP(a, b, start, q, done, clk, rst);

   always
     #25 clk = ~clk;
   
   initial
     begin
	clk     = 1'b0;
	#2  rst = 1'b1;
	#23 rst = 1'b0;
	
	a   = 4'd15;
	b   = 4'd2; 
	start = 1'd1;
	#50 start = 1'd0;
	wait(done == 1'b1);

	#50
	a   = 4'd2;
	b   = 4'd11;
	start = 1'd1;
	#50 start = 1'd0;	
	wait(done == 1'b1);
	
     end

endmodule

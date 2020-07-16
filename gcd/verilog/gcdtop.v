module gcdtop(input wire [3:0] a,
	      input wire [3:0] b,
	      input wire       start,
	      output wire [3:0] q,
	      output wire      done,

	      input wire       clk,
	      input wire       rst);

   wire 		       c1, c2, c3, f, g;

   gcddp   DP(a, b, c1, c2, c3, q, f, g, clk, rst);
   gcdctl CTL(start, f, g, done, c1, c2, c3, clk, rst);

endmodule

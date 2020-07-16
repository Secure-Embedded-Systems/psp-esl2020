module gcdctl(input wire start,
	      input wire f,       // a larger than b
	      input wire g,       // a equals b
	      
	      output wire done,
	      output wire c1,     // register load signal
	      output wire c2,     // do a = a - b
	      output wire c3,     // do b = b - a

	      input wire clk,
	      input wire rst);

   reg 			  state;
   wire 		  next_state;

   localparam S0 = 0, S1 = 1;

   always @(posedge clk, posedge rst)
     begin
	if (rst)
	  state <= S0;
	else
	  state <= next_state;
     end
   
   assign done = ((state == S0) & ~start);
   assign c1   = ((state == S0) & start);
   assign c2   = ((state == S1) & ~g &  f);
   assign c3   = ((state == S1) & ~g & ~f);

   assign next_state = ((state == S0) & start) ? S1 :
		       ((state == S1) & g) ? S0 :
		       state;
   
endmodule

module pwmtop(input wire [7:0] duty,
	      output wire pulse,
	      input wire  clk,
	      input wire  rst);

   reg [7:0] 		  cnt, cnt_next;
   reg 			  pulsereg;
   
   always @(posedge clk)
     begin
	cnt <= rst ? 8'h0 : cnt_next;	
     end

   always @(*)
     begin
	pulsereg = (cnt > duty) ? 1'b1 : 1'b0;
	cnt_next = cnt + 1'b1;
     end

   assign pulse = pulsereg;
   
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:58 03/31/2019 
// Design Name: 
// Module Name:    Mul32 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Mul32_32Add(input wire clk,
              input wire [31:0]A, B,
				  output wire [63:0]S
    );
    reg [63:0]result;
	 reg [5:0]count;
	 reg [1:0]state = 2'b0;
	 reg [63:0]tempResult;
	 reg [31:0]tempA, temp;
	 
	 wire [31:0]nextResult;
	 wire cf, sf;
	 parameter s0=0, s1=1, s2=2;
	 Add_32b a0(.A(tempResult[63:32]), .B(temp), .mode(1'b0), .Co(1'b0), .S(nextResult), .cf(cf), .sf(sf));
	 
	 assign S=result;
	 
	 always@(posedge clk)begin
	   case(state)
		  s0:begin
		    count<= 0;
			 tempResult ={32'b0, B};
			 state<=s1;
			 tempA<=A;
			 temp =0;
			 end
		  s1:begin
		    if(count==6'b100001)
			    state<=s2;
			 else begin
			   temp = tempA & {32{tempResult[0]}};
				tempResult[63:32] = nextResult;	
				tempResult = tempResult>>1;
            count <= count+1;
            state <= s1;
          end
        end
        s2:begin
           result<=tempResult;
           state<=2'b0;
        end
      endcase	
  end		
endmodule

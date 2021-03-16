`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:28 06/06/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
   input wire [31:0] Adat,
	input wire [31:0] Bdat,
	input wire [2:0] ALUop,
	output reg [31:0] result,
	output zero,
	output overflow
   );
	wire cfs,overflow;
	//and or add nor slt xor srl
	wire [31:0] r_and,r_or,r_add,r_slt,r_nor,r_xor,r_srl;
	wire [31:0] r_sub;
	assign r_and = Adat&Bdat; //AND
	assign r_or = Adat|Bdat;  //OR
	assign r_xor =Adat^Bdat;   //xor
	assign r_srl = Bdat>>1;   //srl
	assign r_slt =(Adat < Bdat)?1:0;//slt
	assign r_nor =~(Adat|Bdat);//nor
	assign r_sub=Adat-Bdat;
	assign r_add=Adat+Bdat;
//	adder32 add1(.A(Adat),.B(Bdat),.Cin(ALUop[2]),.mode(ALUop[2]),.S(r_add),.CF(cfs),.OF(overflow));//AND ALUop[2]¿ØÖÆ¼Ó
   always @ (Adat or Bdat or ALUop)
      case (ALUop)
           3'b000: result=r_and;	
           3'b001: result=r_or;	
           3'b010: result=r_add;
			  3'b011: result=r_xor;
			  3'b101: result=r_srl;
           3'b110: result=r_sub;
           3'b100: result=r_nor;			  
	        3'b111: result=r_slt;
	        default: result=32'hx;
    endcase
	 assign zero = (result==0)? 1: 0;
	 assign overflow = 0;
endmodule

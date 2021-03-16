`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:21 03/20/2020 
// Design Name: 
// Module Name:    Adder8 
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
module Adder8(
		input wire [7:0]A,
		input wire [7:0]B,
		input wire Ctrl,Co,
		output wire [7:0]C,
		output wire CF,OF,SF,PF,ZF
    );
	 wire CfL,OfL,SFL;
	 wire ZFH,ZFL;
	 assign ZF=ZFH&ZFL;
	 wire PFH;
	 		//符号SF、进位CF、溢出OF、零标志ZF、奇偶PF
	 Adder4 High(.A(A[7:4]),.B(B[7:4]),.Ctrl(Ctrl),.Co(CfL),.out(C[7:4]),.CF(CF), .OF(OF), .ZF(ZFH),.SF(SF), .PF(PFH));
	 Adder4  Low(.A(A[3:0]),.B(B[3:0]),.Ctrl(Ctrl),.Co(Co), .out(C[3:0]),.CF(CfL),.OF(OfL),.ZF(ZFL),.SF(SFL),.PF(PF));
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:22:27 06/07/2020 
// Design Name: 
// Module Name:    MUX2_32 
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
module MUX2_32(
    input wire [31:0] A,
	 input wire [31:0] B,
	 input wire Ctrl,
	 output wire [31:0] S
    );
	assign S = Ctrl? B : A;
endmodule

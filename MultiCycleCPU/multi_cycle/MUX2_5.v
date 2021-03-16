`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:15:49 06/29/2020 
// Design Name: 
// Module Name:    MUX2_5 
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
module MUX2_5(
    input wire [4:0] A,
	 input wire [4:0] B,
	 input wire Ctrl,
	 output wire [4:0] S
    );
	assign S = Ctrl? B : A;
endmodule

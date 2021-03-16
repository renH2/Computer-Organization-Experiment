`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:29:51 08/15/2020 
// Design Name: 
// Module Name:    Mux2_1 
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
module Mux2_1(
	input ctrl,
	input sw,clk,
	output ctrlOut
    );
	assign ctrlOut=(ctrl==1'b1)?clk:sw;

endmodule

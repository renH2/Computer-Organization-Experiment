`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:18 06/11/2020 
// Design Name: 
// Module Name:    extension 
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
module extension(
    input wire [15:0] a,
	 output [31:0] b
    );
	 assign b={{16{a[15]}},a[15:0]};

endmodule

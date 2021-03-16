`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:46 03/14/2019 
// Design Name: 
// Module Name:    add_1b 
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
module add_1b(input wire a, b, Co,
              output wire s, C
    );
    wire i, j, p, q;
    assign s=a^b^Co;
	 assign C=(a&b)|(a&Co)|(b&Co);
	 
endmodule

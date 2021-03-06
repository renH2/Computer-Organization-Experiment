`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:43 08/10/2020 
// Design Name: 
// Module Name:    InstructionCut 
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
//ָ???ָ?
module InstructionCut(
        input [31:0] instruction,
        output reg[5:0] op,
        output reg[4:0] rs,
        output reg[4:0] rt,
        output reg[4:0] rd,
        output reg[4:0] sa,
		  output reg[5:0] func,
        output reg[15:0] immediate,
        output reg[25:0] addr
    );

    initial begin
        op = 6'b000000;
        rs = 5'b00000;
        rt = 5'b00000;
        rd = 5'b00000;
		  func = 6'b000000;
    end

    always@(instruction) 
    begin
        op = instruction[31:26];
		  func = instruction[5:0];
        rs = instruction[25:21];
        rt = instruction[20:16];
        rd = instruction[15:11];
        sa = instruction[10:6];
        immediate = instruction[15:0];
        addr = instruction[25:0];
    end
endmodule


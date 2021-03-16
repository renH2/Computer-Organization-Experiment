`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:19:42 08/10/2020 
// Design Name: 
// Module Name:    SignZeroExtend 
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
module SignZeroExtend(
        input wire [15:0] immediate,    //立即数
        input ExtSel,                   //状态'0',0扩展，否则符号位扩展
        output [31:0] extendImmediate
    );

    always@(extendImmediate)
    begin
        $display("%d", extendImmediate[31]);
    end

    assign extendImmediate[15:0] = immediate;
    assign extendImmediate[31:16] = ExtSel ? (immediate[15] ? 16'hffff : 16'h0000) : 16'h0000;
endmodule


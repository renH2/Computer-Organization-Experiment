`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:13:49 08/10/2020 
// Design Name: 
// Module Name:    InsMEM 
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
`timescale 1ns / 1ps
//ROM
//instruction memory 指令寄存器
module InsMEM(
        input [31:0] IAddr,
        input InsMemRW,             //状态为'0'，写指令寄存器，否则为读指令寄存器
        output reg[31:0] IDataOut
    );

    reg [31:0] rom[128:0];  // 存储器定义必须用reg类型，存储器存储单元32位长度，共128个存储单元，可以存32条指令

    // 加载数据到存储器rom。注意：必须使用绝对路径
    initial 
    begin
        $readmemb("romData.txt", rom);
    end

    //大端模式
    always@(IAddr or InsMemRW)
    begin
        //取指令
        if(InsMemRW)
            begin
//                IDataOut[7:0] = rom[IAddr + 3];
//                IDataOut[15:8] = rom[IAddr + 2];
//                IDataOut[23:16] = rom[IAddr + 1];
//                IDataOut[31:24] = rom[IAddr];
						IDataOut = rom[IAddr/4];
            end 
            //$display("iaddr: %d insmemrw: %d inst; %d",IAddr, InsMemRW, IDataOut);
    end

endmodule


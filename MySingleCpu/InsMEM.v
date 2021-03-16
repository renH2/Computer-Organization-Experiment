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
//instruction memory ָ��Ĵ���
module InsMEM(
        input [31:0] IAddr,
        input InsMemRW,             //״̬Ϊ'0'��дָ��Ĵ���������Ϊ��ָ��Ĵ���
        output reg[31:0] IDataOut
    );

    reg [31:0] rom[128:0];  // �洢�����������reg���ͣ��洢���洢��Ԫ32λ���ȣ���128���洢��Ԫ�����Դ�32��ָ��

    // �������ݵ��洢��rom��ע�⣺����ʹ�þ���·��
    initial 
    begin
        $readmemb("romData.txt", rom);
    end

    //���ģʽ
    always@(IAddr or InsMemRW)
    begin
        //ȡָ��
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


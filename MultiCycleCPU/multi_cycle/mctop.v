`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:36 06/29/2020 
// Design Name: 
// Module Name:    mctop 
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
module mctop(
   input clk,
   input [15:0]SW,
   input RSTN,
   input btn,
   output SEGLED_CLK,
   output SEGLED_CLR,
   output SEGLED_DO,
   output SEGLED_PEN
    );
  wire [31:0]clkdiv;
  wire rstn;
  clkdiv c0(.clk(clk),.rst(1'b0),.clkdiv(clkdiv[31:0]));
 
  wire [31:0] pc_data,inst_data;
  wire [4:0] state_data;
  //top t0(.clk(clkdiv[17]),.rst(RSTN),.PC(pc_data),.instruction(inst_data),.state(state_data));
 
  wire [3:0] sout;
  wire [31:0] segTestData; 
  
  MUX4_32 m6(.I0(pc_data),.I1(inst_data),.I2({27'b0,state_data}),.I3(32'b0),.s(SW[5:4]),.o(segTestData));
  
  assign SEGLED_CLK = sout[3];
  assign SEGLED_DO = sout[2];
  assign SEGLED_PEN = sout[1];
  assign SEGLED_CLR = sout[0];
  Seg7Device s0(.clkIO(clkdiv[3]),.clkScan(clkdiv[15:14]),.clkBlink(clkdiv[25]),.data(segTestData),.point(8'h0),.LES(8'h0),.sout(sout));
  
endmodule

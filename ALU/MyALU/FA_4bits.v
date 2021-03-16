`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:16:03 08/20/2020 
// Design Name: 
// Module Name:    FA_4bits 
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
module FA_4bits(
	input Ctrl,
	input [3:0]A,B,
	input C0,
	output [3:0]s,
	output OF,CF,ZF,SF,PF
    );
	 wire [3:0]ca;
	 
	 FA f0(.a(A[0]),.b(B[0]^Ctrl),.c0(Ctrl),   .s(s[0]),.Ca(ca[0]));
 	 FA f1(.a(A[1]),.b(B[1]^Ctrl),.c0(ca[0]),.s(s[1]),.Ca(ca[1]));
	 FA f2(.a(A[2]),.b(B[2]^Ctrl),.c0(ca[1]),.s(s[2]),.Ca(ca[2]));
	 FA f3(.a(A[3]),.b(B[3]^Ctrl),.c0(ca[2]),.s(s[3]),.Ca(ca[3]));
	 assign CF=ca[3]^Ctrl;
	 assign OF=ca[3]^ca[2];
	 assign SF=s[3];
	 assign ZF=~(s[0]|s[1]|s[2]|s[3]);
	 assign PF=s[0]^s[1]^s[2]^s[3];


endmodule

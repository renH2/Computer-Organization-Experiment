`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:19 08/20/2020 
// Design Name: 
// Module Name:    FA_32bits 
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
module FA_32bits(
	input Ctrl,
	input [31:0]A,B,
	output [31:0]s,
	output OF,CF,ZF,SF,PF
    );
	wire [31:0]ca;
		FA f0(.a(A[0]),.b(B[0]^Ctrl),.c0(Ctrl), .s(s[0]),.Ca(ca[0]));
		FA f1(.a(A[1]),.b(B[1]^Ctrl),.c0(ca[0]),.s(s[1]),.Ca(ca[1]));
		FA f2(.a(A[2]),.b(B[2]^Ctrl),.c0(ca[1]),.s(s[2]),.Ca(ca[2]));
		FA f3(.a(A[3]),.b(B[3]^Ctrl),.c0(ca[2]),.s(s[3]),.Ca(ca[3]));
		FA f4(.a(A[4]),.b(B[4]^Ctrl),.c0(ca[3]),.s(s[4]),.Ca(ca[4]));
		FA f5(.a(A[5]),.b(B[5]^Ctrl),.c0(ca[4]),.s(s[5]),.Ca(ca[5]));
		FA f6(.a(A[6]),.b(B[6]^Ctrl),.c0(ca[5]),.s(s[6]),.Ca(ca[6]));
		FA f7(.a(A[7]),.b(B[7]^Ctrl),.c0(ca[6]),.s(s[7]),.Ca(ca[7]));
		FA f8(.a(A[8]),.b(B[8]^Ctrl),.c0(ca[7]),.s(s[8]),.Ca(ca[8]));
		FA f9(.a(A[9]),.b(B[9]^Ctrl),.c0(ca[8]),.s(s[9]),.Ca(ca[9]));
		FA f10(.a(A[10]),.b(B[10]^Ctrl),.c0(ca[ 9]),.s(s[10]),.Ca(ca[10]));
		FA f11(.a(A[11]),.b(B[11]^Ctrl),.c0(ca[10]),.s(s[11]),.Ca(ca[11]));
		FA f12(.a(A[12]),.b(B[12]^Ctrl),.c0(ca[11]),.s(s[12]),.Ca(ca[12]));
		FA f13(.a(A[13]),.b(B[13]^Ctrl),.c0(ca[12]),.s(s[13]),.Ca(ca[13]));
		FA f14(.a(A[14]),.b(B[14]^Ctrl),.c0(ca[13]),.s(s[14]),.Ca(ca[14]));
		FA f15(.a(A[15]),.b(B[15]^Ctrl),.c0(ca[14]),.s(s[15]),.Ca(ca[15]));
		FA f16(.a(A[16]),.b(B[16]^Ctrl),.c0(ca[15]),.s(s[16]),.Ca(ca[16]));
		FA f17(.a(A[17]),.b(B[17]^Ctrl),.c0(ca[16]),.s(s[17]),.Ca(ca[17]));
		FA f18(.a(A[18]),.b(B[18]^Ctrl),.c0(ca[17]),.s(s[18]),.Ca(ca[18]));
		FA f19(.a(A[19]),.b(B[19]^Ctrl),.c0(ca[18]),.s(s[19]),.Ca(ca[19]));
		FA f20(.a(A[20]),.b(B[20]^Ctrl),.c0(ca[19]),.s(s[20]),.Ca(ca[20]));
		FA f21(.a(A[21]),.b(B[21]^Ctrl),.c0(ca[20]),.s(s[21]),.Ca(ca[21]));
		FA f22(.a(A[22]),.b(B[22]^Ctrl),.c0(ca[21]),.s(s[22]),.Ca(ca[22]));
		FA f23(.a(A[23]),.b(B[23]^Ctrl),.c0(ca[22]),.s(s[23]),.Ca(ca[23]));
		FA f24(.a(A[24]),.b(B[24]^Ctrl),.c0(ca[23]),.s(s[24]),.Ca(ca[24]));
		FA f25(.a(A[25]),.b(B[25]^Ctrl),.c0(ca[24]),.s(s[25]),.Ca(ca[25]));
		FA f26(.a(A[26]),.b(B[26]^Ctrl),.c0(ca[25]),.s(s[26]),.Ca(ca[26]));
		FA f27(.a(A[27]),.b(B[27]^Ctrl),.c0(ca[26]),.s(s[27]),.Ca(ca[27]));
		FA f28(.a(A[28]),.b(B[28]^Ctrl),.c0(ca[27]),.s(s[28]),.Ca(ca[28]));
		FA f29(.a(A[29]),.b(B[29]^Ctrl),.c0(ca[28]),.s(s[29]),.Ca(ca[29]));
		FA f30(.a(A[30]),.b(B[30]^Ctrl),.c0(ca[29]),.s(s[30]),.Ca(ca[30]));
		FA f31(.a(A[31]),.b(B[31]^Ctrl),.c0(ca[30]),.s(s[31]),.Ca(ca[31]));

	 assign CF=ca[31]^Ctrl;
	 assign OF=ca[31]^ca[30];
	 assign SF=s[31];
	 assign ZF=~(s[0]|s[1]|s[2]|s[3]|s[4]|s[5]|s[6]|s[7]|s[8]|s[9]|s[10]|s[11]|s[12]|s[13]|s[14]|s[15]|s[16]|s[17]|s[18]|s[19]|s[20]|s[21]|s[22]|s[23]|s[24]|s[25]|s[26]|s[27]|s[28]|s[29]|s[30]|s[31]);
	 assign PF=s[0]^s[1]^s[2]^s[3]^s[4]^s[5]^s[6]^s[7]^s[8]^s[9]^s[10]^s[11]^s[12]^s[13]^s[14]^s[15]^s[16]^s[17]^s[18]^s[19]^s[20]^s[21]^s[22]^s[23]^s[24]^s[25]^s[26]^s[27]^s[28]^s[29]^s[30]^s[31];

endmodule

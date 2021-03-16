`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:57:03 03/14/2019 
// Design Name: 
// Module Name:    Add_4b 
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
module Add_4b_(input  wire [3:0]A, B,
				  input  wire  mode, Co,
				  output wire [3:0]S,
				  output wire cf, zf, of, pf, sf
    );
	 wire[3:0] si, s;
	 wire[4:1] c;
	 wire p, q, x;
	 xor(si[0], B[0], mode);
	 xor(si[1], B[1], mode);
    xor(si[2], B[2], mode);
	 xor(si[3], B[3], mode);
	 add_1b m0(A[0], si[0], Co, s[0], c[1]);
    add_1b m1(A[1], si[1], c[1], s[1], c[2]);
    add_1b m2(A[2], si[2], c[2], s[2], c[3]);
	 add_1b m3(A[3], si[3], c[3], s[3], c[4]);
	 assign cf=c[4];
    xor(of, c[4], c[3]);
	 or(p, s[0], s[1], s[2], s[3]);
	 assign zf=~p;
	 xor(q, s[0], s[1], s[2], s[3]);
	 assign pf=q;
	 xor(x, c[4], c[3]);
	 assign of=x;
	 assign sf=s[3];
	 assign S=s;
endmodule

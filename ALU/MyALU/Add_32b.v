`timescale 1ns / 1ps
module Add_32b(input  wire [31:0]A, B,
				  input  wire  Ctrl, Co, 
				  output wire [31:0]S,
				  output wire CF,OF,SF,PF,ZF
    );
	 wire [3:0]ZFs;
	 wire [2:0]CFs;
	 
	 Adder8 a0(.A(A[ 7: 0]),.B(B[ 7: 0]),.C(S[ 7: 0]),.CF(CFs[0]),.ZF(ZFs[0]),.Ctrl(Ctrl),.Co(1'b0),.PF(PF));
 	 Adder8 a1(.A(A[15: 8]),.B(B[15: 8]),.C(S[15: 8]),.CF(CFs[1]),.ZF(ZFs[1]),.Ctrl(Ctrl),.Co(CFs[0]));
	 Adder8 a2(.A(A[23:16]),.B(B[23:16]),.C(S[23:16]),.CF(CFs[2]),.ZF(ZFs[2]),.Ctrl(Ctrl),.Co(CFs[1]));
	 Adder8 a3(.A(A[31:24]),.B(B[31:24]),.C(S[31:24]),.CF(CF),.SF(SF),.OF(OF),.ZF(ZFs[3]),.Ctrl(Ctrl),.Co(CFs[2]));
	 assign ZF=ZFs[0]&ZFs[1]&ZFs[2]&ZFs[3];
endmodule
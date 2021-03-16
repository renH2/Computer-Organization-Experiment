`timescale 1ns / 1ps

module Regs(
	input clk, rst, L_S,
	input [4:0] R_addr_A, R_addr_B, Wt_addr,
	input [31:0] Wt_data,
	input [4:0] Show_Addr,
	output [31:0] rdata_A, rdata_B, Reg_Show
    );
	 
	 reg[31:0] register[1:31]; //r1 - r31
	 integer i;
	 
	 assign rdata_A = (R_addr_A == 0)? 0 : register[R_addr_A];
	 assign rdata_B = (R_addr_B == 0)? 0 : register[R_addr_B];
	 assign Reg_Show = register[Show_Addr];
	 
	 always @ (posedge clk or posedge rst) begin
		if (rst == 1) begin
			for(i=1; i<32; i=i+1)
				register[i] <= 0;
		end
		else if ((Wt_addr != 0) && (L_S == 1))
			register[Wt_addr] <= Wt_data;
		end

endmodule
`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:00:32 06/30/2020
// Design Name:   control
// Module Name:   D:/multi_cycle/control_test.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module control_test;

	// Inputs
	reg clk;
	reg rst;
	reg MIO_ready;
	reg zero;
	reg overflow;
	reg [31:0] inst;

	// Outputs
	wire MemRead;
	wire MemWrite;
	wire IorD;
	wire CPU_MIO;
	wire IRWrite;
	wire RegWrite;
	wire ALUSrcA;
	wire PCWrite;
	wire PCWriteCond;
	wire Branch;
	wire [1:0] RegDst;
	wire [1:0] MemtoReg;
	wire [1:0] ALUSrcB;
	wire [1:0] PCSource;
	wire [2:0] ALU_operation;
	wire [4:0] state_out;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.clk(clk), 
		.rst(rst), 
		.MIO_ready(MIO_ready), 
		.zero(zero), 
		.overflow(overflow), 
		.inst(inst), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.IorD(IorD), 
		.CPU_MIO(CPU_MIO), 
		.IRWrite(IRWrite), 
		.RegWrite(RegWrite), 
		.ALUSrcA(ALUSrcA), 
		.PCWrite(PCWrite), 
		.PCWriteCond(PCWriteCond), 
		.Branch(Branch), 
		.RegDst(RegDst), 
		.MemtoReg(MemtoReg), 
		.ALUSrcB(ALUSrcB), 
		.PCSource(PCSource), 
		.ALU_operation(ALU_operation), 
		.state_out(state_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		MIO_ready = 0;
		zero = 0;
		overflow = 0;
		inst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst=1;
		#100;
		rst=0;
      MIO_ready=1;
		inst=32'h20100000;
		//inst=32'h5b000004;
		// Add stimulus here
	end
  always #20 clk=~clk;
      
endmodule


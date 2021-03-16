`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:31:38 08/12/2020
// Design Name:   Top
// Module Name:   E:/English Ruanjian/ISE/CO/single/MySingleCpu/MySingleCpu/Top_sim.v
// Project Name:  MySingleCpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top_sim;

	// Inputs
	reg CLK;
	reg Reset;
	reg [15:0] SW;

	// Outputs
	wire [3:0] AN;
	wire [7:0] SEGMENT;
	wire SEGLED_CLK;
	wire SEGLED_CLR;
	wire SEGLED_DO;
	wire SEGLED_PEN;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.CLK(CLK), 
		.Reset(Reset), 
		.SW(SW), 
		.AN(AN), 
		.SEGMENT(SEGMENT), 
		.SEGLED_CLK(SEGLED_CLK), 
		.SEGLED_CLR(SEGLED_CLR), 
		.SEGLED_DO(SEGLED_DO), 
		.SEGLED_PEN(SEGLED_PEN)
	);
initial begin
    // Initialize Inputs
    CLK = 1;
    Reset = 0;
	 SW=0;

    CLK = !CLK;  // 下降沿，使PC先清零
	 SW[5]=!SW[5];
	 SW[15:13]=3'b111;
    Reset = 1;  // 清除保持信号
	 SW[4:0]=5'b11101;
    forever #5
    begin // 产生时钟信号，周期为50s
         CLK = !CLK;
			SW[5]=!SW[5];
    end
end
      
endmodule


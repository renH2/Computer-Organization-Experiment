// Verilog test fixture created from schematic E:\3180105388\lab 8\MyALU\myALU.sch - Mon Nov 11 13:30:46 2019

`timescale 1ns / 1ps

module myALU_myALU_sch_tb();

// Inputs
   reg [3:0] A;
   reg [3:0] B;
   reg [1:0] S;

// Output
   wire [3:0] C;
   wire Co;

// Bidirs

// Instantiate the UUT
   myALU UUT (
		.A(A), 
		.B(B), 
		.S(S), 
		.C(C), 
		.Co(Co)
   );
// Initialize Inputs
       initial begin
		A = 10;
		B = 7;
		S = 0;
		#50;
		B = 3;
		#50;
		S = 1;
		#50;
		S = 2;
		#50;
		S = 3;
end
endmodule

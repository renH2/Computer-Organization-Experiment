`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:20:17 06/29/2020 
// Design Name: 
// Module Name:    control 
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
module control(
    input clk,
	 input rst,
	 input MIO_ready,
	 input zero,
	 input overflow,
	 input [31:0] inst,
	 output reg MemRead,
	 output reg MemWrite,
	 output reg IorD,
	 output reg CPU_MIO,
	 output reg IRWrite,
	 output reg RegWrite,
	 output reg ALUSrcA,
	 output reg PCWrite,
	 output reg PCWriteCond,
	 output reg Branch,
	 output reg [1:0] RegDst,
	 output reg [1:0] MemtoReg,
	 output reg [1:0] ALUSrcB,
	 output reg [1:0] PCSource,
	 output reg [2:0] ALU_operation,
	 output[4:0] state_out
    );
	 //详细状态机可参见execl表格
	parameter IF = 5'b00000, 			signalsIF 		= 20'b10010100000010000000,
				 ID = 5'b00001, 			signalsID 		= 20'b00000000000110000000,
				 ExecR = 5'b00010, 		signalsExecR 	= 20'b00000000001000000100, 
				 ExecMem = 5'b00011, 	signalsExecMem = 20'b00000000001100000000,
				 ExecI = 5'b00100, 		signalsExecI 	= 20'b00000000001100000100,
				 ExecBeq=5'b00110, 		signalsExecBeq = 20'b01000000011000001010,
				 ExecJ=5'b01010, 			signalsExecJ 	= 20'b10000000100000000000,
				 MemRD = 5'b01011, 		signalsMemRD 	= 20'b00110000000000000001,
				 MemWD=5'b01100, 			signalsMemWD 	= 20'b00101000000000000001,
				 R_WB= 5'b01101,			signalsR_WB 	= 20'b00000000000001010000,
				 I_WB= 5'b01110, 			signalsI_WB 	= 20'b00000000000001000000,
				 LW_WB=5'b01111, 			signalsLW_WB 	= 20'b00000001000001000000,
				 ExecSrl=5'b10000, 		signalsExecSrl = 20'b00000000001100000100,
				 Error=5'b11111, 			signalsError 	= 20'b00000000000000000000,
				 ExecLUi=5'b00101, 		signalsExecLUi = 20'b00000010000001000000,
				 ExecBne=5'b00111, 		signalsExecBne	= 20'b01000000011000000010,
				 ExecJal=5'b01001, 		signalsExecJal	= 20'b10000011100001100000,
				 ExecJr=5'b01000, 		signalsExecJr	= 20'b10000000110000000000;
	
	reg [1:0] ALUop;
	`define Datapath_signals {PCWrite, PCWriteCond, IorD, MemRead, MemWrite, IRWrite, MemtoReg[1:0], PCSource[1:0], ALUSrcA, ALUSrcB[1:0], RegWrite, RegDst[1:0], Branch, ALUop[1:0], CPU_MIO}
	
	//state
	reg [4:0] state=5'b00000;
	assign state_out = state;
	
	//state machine
	always@(posedge clk or posedge rst) begin
	     if(rst) state<=IF;
		  else begin
		       case(state)
				   //MIO is ready, then continue
				    IF:begin
					    if(MIO_ready) state<=ID;
						 else state<=IF;
					    end
					 ID:begin
					     case(inst[31:26])
						  6'b000000:   //R type
						       case(inst[5:0])//func
								    6'b000010:state<=ExecSrl;//srl
									 6'b001000:state<=ExecJr; //jr
									 default :state<=ExecR;
								 endcase
						  6'b100011: state <= ExecMem; //lw
						  6'b101011: state <= ExecMem; //sw
						  6'b000100: state <= ExecBeq; //beq
						  6'b000101: state <= ExecBne; //bne
						  6'b001000: state <= ExecI;   //addi
						  6'b001100: state <= ExecI;   //andi
						  6'b001101: state <= ExecI;   //ori
						  6'b001110: state <= ExecI;   //xori
						  6'b001010: state <= ExecI;   //slti						
						  6'b001111: state <= ExecLUi; //lui
						  6'b000010: state <= ExecJ;   //J 
						  6'b000011: state <= ExecJal; //Jal
						  default: state <= Error;     //error
						  endcase
					 end
					 
					 ExecMem: begin
					     case(inst[31:26])
						  6'b100011: state<=MemRD;//le
						  6'b100011: state<=MemRD;
						  default: state<=Error;
						  endcase;
					 end
					 
					 ExecR:	state <= R_WB; 
			       ExecSrl:state <= R_WB;
				    ExecI:	state <= I_WB; 
				    ExecBeq:state <= IF;
				    ExecJ:	state <= IF;
				    MemRD: 	state <= LW_WB;
				    LW_WB: 	state <= IF;
				    MemWD:	state <= IF;
				    R_WB:	state <= IF;
			 	    I_WB:	state <= IF;
			       ExecLUi:state <= IF;
				    ExecBne:state <= IF;
				    ExecJal:state <= IF;
				    ExecJr: state <= IF;
				    Error:	state <= Error;
				    default: state <= Error;
				endcase
			end
		end
		
	always @ * begin
		case (state) //state
			IF:     `Datapath_signals <= signalsIF;
			ID:     `Datapath_signals <= signalsID;
			ExecR:  `Datapath_signals <= signalsExecR;
			ExecMem:`Datapath_signals <= signalsExecMem;
			ExecI:  `Datapath_signals <= signalsExecI;
			ExecBeq:`Datapath_signals <= signalsExecBeq;
			ExecJ:  `Datapath_signals <= signalsExecJ;
			MemRD:  `Datapath_signals <= signalsMemRD;
			MemWD:  `Datapath_signals <= signalsMemWD;
			R_WB:   `Datapath_signals <= signalsR_WB;
			I_WB:   `Datapath_signals <= signalsI_WB;
			LW_WB:  `Datapath_signals <= signalsLW_WB;
			ExecSrl:`Datapath_signals <= signalsExecSrl;		
			ExecLUi:`Datapath_signals <= signalsExecLUi;
			ExecBne:`Datapath_signals <= signalsExecBne;
			ExecJal:`Datapath_signals <= signalsExecJal;
			ExecJr: `Datapath_signals <= signalsExecJr;
			default:`Datapath_signals <= signalsError;
		endcase
	end
	
	always @ * begin
	   case(ALUop)
		2'b00:ALU_operation=3'b010;
		2'b01:ALU_operation=3'b110;
		2'b10:
		    case(inst[31:26])
			    6'b000000:  //R-type
				   case(inst[5:0])
					   6'b100000: ALU_operation = 3'b010; //add
						6'b100010: ALU_operation = 3'b110; //sub
						6'b100100: ALU_operation = 3'b000; //and
						6'b100101: ALU_operation = 3'b001; //or
						6'b100111: ALU_operation = 3'b100; //nor
						6'b101010: ALU_operation = 3'b111; //slt
						6'b000010: ALU_operation = 3'b101; //srl
						6'b000000: ALU_operation = 3'b011; //xor
						default  : ALU_operation = 3'b010;
					endcase
				 6'b001000: ALU_operation = 3'b010; //addi
				 6'b001100: ALU_operation = 3'b000; //andi
				 6'b001101: ALU_operation = 3'b001; //ori
				 6'b001110: ALU_operation = 3'b011; //xori
				 6'b001010: ALU_operation = 3'b111; //slti
			endcase
		endcase
	end

endmodule

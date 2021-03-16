`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:31:34 06/07/2020 
// Design Name: 
// Module Name:    op2control 
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
module op2control(
     input wire[1:0] ALUop,
     input wire[5:0] Func,
     output wire[2:0] ALUcontrol
    );
	 
    wire t1, t2;
    or (t1, Func[0], Func[3]);
    and (t2, Func[1], ALUop[1]);
    or (ALUcontrol[2], t2, ALUop[0]);
    or (ALUcontrol[1], ~Func[2], ~ALUop[1]);
    and (ALUcontrol[0], t1, ALUop[1]);
/*
     always@(ALUop or Func) begin
         case(ALUop)
             2'b00:ALUcontrol=3'b010;
             2'b01:ALUcontrol=3'b110;
             2'b10:begin
                 case(Func)
                     6'd32:ALUcontrol=3'b010;//add
                     6'd34:ALUcontrol=3'b110;//sub
                     6'd36:ALUcontrol=3'b000;//and
                     6'd37:ALUcontrol=3'b001;//or
                     6'd42:ALUcontrol=3'b111;//slt
                 endcase
             end
             default:ALUcontrol=3'b000;
         endcase
     end*/
endmodule

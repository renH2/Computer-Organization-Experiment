`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:19 03/05/2020 
// Design Name: 
// Module Name:    Adder4 
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
//////////////////////////////////////////////////////////////////////////////////module Adder4(
module Adder4(
		input wire [3:0] A, 
		input wire [3:0] B, 
		input wire Ctrl, 
		input wire Co, 
		output wire [3:0] out, 
		output wire CF,OF,ZF,SF,PF
				);
		reg [3:0]Tout;
		//reg TCF,TOF,TZF,TSF,TPF;
		reg TCF=1'b0,TOF=1'b0,TZF=1'b0,TSF=1'b0,TPF=1'b0;
		reg [3:0]carry;
		initial carry=4'b0000; 
		
		assign out=Tout;
		assign CF=TCF,OF=TOF,ZF=TZF,SF=TSF,PF=TPF;
		always@(*)begin
		if(Ctrl==1'b1)begin//加法的时候 
			if(Co+A[0]+B[0]==2)begin
				Tout[0]<=1'b0;
				carry[0]<=1;
			end
			else if(Co+A[0]+B[0]==3)begin
				Tout[0]<=1;
				carry[0]<=1;
			end
			else begin
				Tout[0]<=Co+A[0]+B[0];
				carry[0]<=0;
			end
			
			
			if(carry[0]+A[1]+B[1]==2)begin
				Tout[1]<=0;
				carry[1]<=1;
			end
			else if(carry[0]+A[1]+B[1]==3)begin
				Tout[1]<=1;
				carry[1]<=1;
			end
			else begin
				Tout[1]<=carry[0]+A[1]+B[1];
				carry[1]<=0;
			end
			
			
			if(carry[1]+A[2]+B[2]==2)begin
				Tout[2]<=0;
				carry[2]<=1;
			end
			else if(carry[1]+A[2]+B[2]==3)begin
				Tout[2]<=1;
				carry[2]<=1;
			end
			else begin
				Tout[2]<=carry[1]+A[2]+B[2];
				carry[2]<=0;
			end
			
			
			if(carry[2]+A[3]+B[3]==2)begin
				Tout[3]<=0;
				carry[3]<=1;
			end
			else if(carry[2]+A[3]+B[3]==3)begin
				Tout[3]<=1;
				carry[3]<=1;
			end
			else begin
				Tout[3]<=carry[2]+A[3]+B[3];
				carry[3]<=0;
			end
			//符号SF、进位CF、溢出OF、零标志ZF、奇偶PF
			TSF<=1'b0;
			if(carry[3]==1)begin
				TCF<=1'b1;
				TOF<=1'b1;
			end
			else begin
				TCF<=1'b0;
				TOF<=1'b0;
			end
			if(out==4'b0000)
				TZF<=1'b1;
			if(out[0]==1'b1)
				TPF<=1'b1;	//1代表是奇数 
			else
				TPF<=1'b0;
							
		end
		else begin	//减法的时候 					A 0 1 B 0 1 C 0 1 
		
			if(A[0]-Co-B[0]==-2)begin
				Tout[0]<=1'b0;
				carry[0]<=1'b1;
			end
			else if(A[0]-Co-B[0]==-1)begin
				Tout[0]<=1'b1;
				carry[0]<=1'b1;
			end
			else begin
				Tout[0]<=A[0]-Co-B[0];
				carry[0]<=1'b0;
			end	
			
			if(A[1]-carry[0]-B[1]==-2)begin
				Tout[1]<=1'b0;
				carry[1]<=1'b1;
			end
			else if(A[1]-carry[0]-B[1]==-1)begin
				Tout[1]<=1'b1;
				carry[1]<=1'b1;
			end
			else begin
				Tout[1]<=A[1]-carry[0]-B[1];
				carry[1]<=1'b0;
			end
			
			if(A[2]-carry[1]-B[2]==-2)begin
				Tout[2]<=1'b0;
				carry[2]<=1'b1;
			end
			else if(A[2]-carry[1]-B[2]==-1)begin
				Tout[2]<=1'b1;
				carry[2]<=1'b1;
			end
			else begin
				Tout[2]<=A[2]-carry[1]-B[2];
				carry[2]<=1'b0;
			end
			
			if(A[3]-carry[2]-B[3]==-2)begin
				Tout[3]<=1'b0;
				carry[3]<=1'b1;
			end
			else if(A[3]-carry[2]-B[3]==-1)begin
				Tout[3]<=1'b1;
				carry[3]<=1'b1;
			end
			else begin
				Tout[3]<=A[3]-carry[2]-B[3];
				carry[3]<=1'b0;
			end
			//符号SF、进位CF、溢出OF、零标志ZF、奇偶PF
			if(carry[3]==1'b1)begin
				TSF<=1'b1;
				TOF<=1'b1;
				TCF<=1'b1;
			end
			else begin
				TSF<=1'b0;
				TOF<=1'b0;
				TCF<=1'b0;
			end
			if(Tout==4'b0000)
				TZF<=1'b0;
			if(Tout[0]==1'b1)
				TPF<=1'b1;
			else
				TPF<=1'b0;
		
		end
	end

endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:04:18 04/02/2019 
// Design Name: 
// Module Name:    div64_32 
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
module div64_32(input wire[63:0] A,   
                input wire[31:0] B,  
                input wire clk,
                output wire [31:0] S,  
                output wire [31:0] Remainder  
    );
reg[95:0] temp_a, result;  
reg[31:0] temp_b;
reg [6:0]count;
reg [1:0]state = 2'b0;
	 
wire [31:0] next_a;
wire cf, sf;
parameter s0=0, s1=1, s2=2;

  Add_32b m0(.A(temp_a[95:64]), .B(temp_b), .mode(1'b1), .Co(1'b1), .S(next_a), .cf(cf), .sf(sf));
  
 assign S = result[31:0];  
 assign Remainder = result[95:64];  
always @(posedge clk)  begin
   case(state)
	  s0:begin
	    temp_a = {32'b0,A};  
       temp_b = B;  
       count<=0;
       state<=s1;	
       end		
    s1:begin
      if(count==7'b1000001) state<=s2;
      else begin  
       		
        if(sf==0) begin
		  temp_a[95:64] = next_a ;
		  temp_a = temp_a + 1'b1;
        end		  
        else  temp_a = temp_a;
		  
         temp_a = temp_a<<1;	
			count<=count+1;
			state<=s1;
      end  
		end
	s2:begin
	   temp_a = temp_a >>1;
	   state <= s0;
		result = temp_a;
		end
  
endcase
end 
  

endmodule

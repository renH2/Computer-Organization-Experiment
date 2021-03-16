module GetInput(
    input clk,
 
	 input [2:0]btn,
    input [15:0] SW,
    output reg [31:0] A,
    output reg [31:0] AHigh,
    output reg [31:0] B
  );

wire [3:0] A4b,B4b;
assign A4b = SW[15:12];
assign B4b = SW[11:8];

initial begin
A<={28'b0, SW[15:12]};
B<={28'b0, SW[11:8]};
AHigh<=0;
end

always @ (posedge btn[0])begin
 if(btn[0])begin
    A<=A<<4;
    A<=A+{28'b0,A4b};
 end
 end

always @ (posedge btn[1] )begin
 
 if(btn[1])begin
    B<=B<<4;
    B<=B+{28'b0,B4b};
 end
 end

endmodule

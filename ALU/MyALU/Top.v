module Top(
  input clk,
  input [15:0]SW,
  input RSTN,
  output [7:0]SEGMENT,
  output [3:0]AN,
  output SEGLED_CLK,
  output SEGLED_CLR,
  output SEGLED_DO,
  output SEGLED_PEN
     );
wire [31:0]clkdiv;
wire rstn;
wire [2:0]btn_out;
wire [63:0]ALU_out;
wire [4:0]flagOut;
clkdiv c0(
.clk(clk),
.rst(1'b0),
.clkdiv(clkdiv[31:0])
);
AntiJitter #(4) A0(.clk(clkdiv[15]),.I(RSTN),.O(rstn));

	wire [31:0] AHigh;
	reg  [31:0] A,B;
	reg [31:0] A_mem[7:0];//可以从txt里面读取八个十六进制数，任意用按键进行选择
	reg [31:0] B_mem[7:0];
	reg [31:0]SegShow;
	reg [15:0]smallShow;
	
	initial begin
        $readmemb("A_Mem.txt", A_mem);
		  $readmemb("B_Mem.txt", B_mem);
    end
	 
	 always@(*)begin
		A<=A_mem[SW[15:13]];//15:13三个按钮控制选择mem里面的A的值
		B<=B_mem[SW[12:10]];
		case(SW[5:4])
			2'b00:SegShow<=ALU_out[31:0 ];
			2'b01:SegShow<=ALU_out[63:32];
			2'b10:SegShow<=A;
			2'b11:SegShow<=B;
		endcase
		if(SW[3:0]==4'b1000||SW[3:0]==4'b1001)
			smallShow<={{1'b0,SW[15:13]},{1'b0,SW[12:10]},{3'b000,flagOut}};
		else
			smallShow<={{1'b0,SW[15:13]},{1'b0,SW[12:10]},{2'b00,SW[5:4]},SW[3:0]};
	end

	 DispNum m6(.clk(clk), .HEXS(smallShow), .LES(4'b0), .points(4'b0), .RST(1'b0), .AN(AN), .Segment(SEGMENT));
	 //小数码管从左到右依次是A的下标，B下标，SEG显示选择，ALU运算方法选择
	 wire [3:0]sout;
	 Seg7Device s0(.clkIO(clkdiv[3]),.clkScan(clkdiv[15:14]),.clkBlink(clkdiv[25]),.data(SegShow),.point(8'h0),.LES(8'h0),.sout(sout));
	 assign SEGLED_CLK = sout[3];
    assign SEGLED_DO = sout[2];
    assign SEGLED_PEN = sout[1];
    assign SEGLED_CLR = sout[0];
  
ALU a1(
  .clk(clk),
  .rst(rstn),
  .A(A),
  .B(B),
  .AHigh(AHigh),
  .mode(SW[3:0]),
  .flag(SW[8:6]),//控制是否有符号的乘除法
  .ALU_out(ALU_out),
  .flagOut(flagOut)
  //64'b_output
  );

endmodule

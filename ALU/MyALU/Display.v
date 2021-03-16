module Display(
    input clk,
    input rstn,//全局复位信号
    input Disp_flag,
    input [63:0] ALU_out,
    input [3:0] A4b,//正在输入的A和B��
    input [3:0] B4b,
    output LED_CLK,//LED时钟值信�
    output LED_CLR,//LED复位值信�
    output LED_DO,//LED执行显示信号
    output LED_PEN,
    output SEGLED_CLK,//七段数码管时钟信�
    output SEGLED_CLR,//七段数码管复位信�
    output SEGLED_DO,//七段数码管执行显示信�
    output SEGLED_PEN,
    output [7:0] SEGMENT,
    output [3:0] AN
  );

wire [31:0] segTestData;     //要显示的数字：高32位和�2位由SW[4]控制
wire [3:0] sout;

//////**********分频**********///////
wire [31:0]clkdiv;
clkdiv c0(
  .clk(clk),
  .rst(1'b0),
  .clkdiv(clkdiv[31:0])
  );

//上面数码管的显示:正在输入的A和B��
disp_num d0(
  .clk(clk),
  .HEXS(ALU_out[15:0]),
  .LES(4'b0),
  .points(4'b0),
  .RST(1'b0),
  .AN(AN),
  .Segment(SEGMENT)
  );
//下面数码管的显示:ALU的结�
assign segTestData = Disp_flag ? ALU_out[63:32] : ALU_out[31:0]; //将要显示的数字传入segTestData
Seg7Device s0(
  .clkIO(clkdiv[3]),
  .clkScan(clkdiv[15:14]),
  .clkBlink(clkdiv[25]),
  .data(segTestData),
  .point(8'h0),
  .LES(8'h0),
  .sout(sout));

assign SEGLED_CLK = sout[3];
assign SEGLED_DO = sout[2];
assign SEGLED_PEN = sout[1];
assign SEGLED_CLR = sout[0];

wire [15:0] ledData;     //led灯反映用户按动了sw开�
assign ledData = 1;
//移动信号接收与处�
ShiftReg #(.WIDTH(16)) ledDevice (.clk(clkdiv[3]), .pdata(~ledData), .sout({LED_CLK,LED_DO,LED_PEN,LED_CLR}));

endmodule

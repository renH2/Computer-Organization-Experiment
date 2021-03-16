module float_add(
  input [31:0]ix,
  input [31:0]iy,
  input clk,
  output reg [31:0]oz
  );

wire[31:0] ix,iy;
wire ost;
reg[25:0] xm, ym, zm;  //尾数（空余多位用以近似）
reg[7:0]  xe, ye, ze;  //阶码
reg[2:0] state;        //浮点加法状态
parameter   start=3'b000,zerock=3'b001,exequal=3'b010,addm=3'b011,infifl=3'b100,over =3'b110;
assign ost = (state == over) ? 1 : 0;

reg temp=0;

always@(posedge ost) //若已经完成，进行赋值
   begin
     oz <= {zm[25],ze[7:0],zm[22:0]}; 
   end

always@(posedge clk)
  begin
    case(state)
      start:        //划分阶段
        begin
          xe <= ix[30:23];
          xm <= {ix[31],1'b0,1'b1,ix[22:0]};
          ye <= iy[30:23];
          ym <= {iy[31],1'b0,1'b1,iy[22:0]};
          state <= zerock;
        end
      zerock:
        begin
		    //若指数为0，默认为0
          if(ix==0)
            begin
              {ze, zm} <= {ye, ym};
              state <= over;
            end
          else if(iy==0)
            begin
              {ze, zm} <= {xe, xm};
               state <= over;
            end
          else if(xe==8'hFF&&ix[22:0]!=0)
			     begin
				     ze<=8'hFF;
					  zm<=26'h3FFFFFF;
				     state <= over;
				  end
			 else if(xe==8'hFF&&ix[22:0]==0)
			     begin
				     ze<=8'hFF;
					  zm<=26'h0;
				     state <= over;
				  end
			else
            state <= exequal;
        end
      exequal: //对阶
        begin
          if(xe == ye)//若指数相同直接相加
            state <= addm;
          else if(xe > ye) //指数不同
            begin
              ye <= ye + 1;
              ym[24:0] <= {1'b0, ym[24:1]};
              if(ym == 0)
                begin
                  zm <= xm;
                  ze <= xe;
                  state <= over;
                end
              else
                state <= exequal;
            end
          else
            begin
              xe <= xe + 1;
              xm[24:0] <= {1'b0,xm[24:1]};
              if(xm == 0)
                begin
                  zm <= ym;
                  ze <= ye;
                  state <= over;
                end
              else
            state <= exequal;
            end
        end
      addm:
        begin
          if ((xm[25]^ym[25])==0) //符号位相同
            begin
              zm[25] <= xm[25];
              zm[24:0] <= xm[24:0]+ym[24:0];
            end
          else
            if(xm[24:0]>ym[24:0])  //根据尾数大小比较
            begin
              zm[25] <= xm[25];
              zm[24:0] <=xm[24:0]-ym[24:0];
            end
          else
            begin
              zm[25] <= ym[25];
              zm[24:0] <=ym[24:0]-xm[24:0];
            end
          ze <= xe;
          state <= infifl;
        end
      infifl://规范化
        begin
          if(zm[24]==1&&zm[0]==0)  //右规（只需要规范一次）
            begin
              zm[24:0] <= {1'b0,zm[24:1]};  
              ze <= ze + 1;   //指数增加
              state <= over;
            end
          if(zm[24]==1&&zm[0]==1)  //右规（只需要规范一次）
            begin
              zm[24:0] <= {1'b0,zm[24:1]}+1;  
              ze <= ze + 1;   //指数增加
              state <= over;
            end
          else if(zm[23]==0)   //左规
            begin
              zm[24:0] <= {zm[23:0],1'b0};
              ze <= ze - 1;
              state <= infifl;
            end
          else
            state <= over;
        end
      over:
        begin
         state<= start;
        end
      default:
        begin
          state<= start;
        end
    endcase
  end


endmodule

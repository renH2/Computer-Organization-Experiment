#include "mips.h"

using namespace std;

byte MEM[MEMSIZE];
dword REG[REGSIZE];
char label[20][8];
int position[20];
int PC, sp, lsp;

vector<string> input;
int outputCur = 0;
vector<string> inputAsm;
vector<string> regName;
int excuteStep = 0;
int excuteNum = 0;
int memPage = 0;
char inst[50];

int main()
{
    initgraph(1000, 600, SHOWCONSOLE);
    initGraph();
    initReg();
    ShowReg();
    while (1)
    {
        //initGraph();
        initReg();//初始化变量等
        MOUSEMSG mouMes;
        mouMes = GetMouseMsg();
        
        if (mouMes.uMsg == WM_LBUTTONDBLCLK && mouMes.x >= 10 && mouMes.x < 480 && mouMes.y>9 && mouMes.y < 250)//10, 9, 480, 250
        {
            getInput();
            ShowReg();
            outIns();
        }
        else if (mouMes.uMsg == WM_LBUTTONDOWN && mouMes.x >= 50 && mouMes.x < 150 && mouMes.y>251 && mouMes.y < 298)//50 150 251 298
        {//上一页
            if (outputCur >= 15)
            {
                initGraph();
                outputCur -= 15;
                ShowReg();
                outIns();
            }
            else
            {
                clearrectangle(501, 301, 1000, 450);
                settextcolor(RED);
                string errorMessage = "ERROR:This is the first page!";
                outtextxy(510, 310, errorMessage.c_str());
                ShowReg();
                outIns();
            }
        }
        //700, 460
        else if (mouMes.uMsg == WM_LBUTTONDOWN && mouMes.x >= 700 && mouMes.x < 850 && mouMes.y>460 && mouMes.y < 500)//50 150 251 298
        {//上一页内存
            if (memPage > 0)
            {
                memPage--;
                ShowReg();
                outIns();
            }
            else
            {
                clearrectangle(501, 301, 1000, 450);
                settextcolor(RED);
                string errorMessage = "ERROR:This is the first page of Memory!";
                outtextxy(510, 310, errorMessage.c_str());
                ShowReg();
                outIns();
            }
        }
        else if (mouMes.uMsg == WM_LBUTTONDOWN && mouMes.x >= 700 && mouMes.x < 850 && mouMes.y>520 && mouMes.y < 570)//50 150 251 298
        {//下一页内存
            if (memPage < 3)
            {
                memPage++;
                ShowReg();
                outIns();
            }
            else
            {
                clearrectangle(501, 301, 1000, 450);
                settextcolor(RED);
                string errorMessage = "ERROR:This is the last page of Memory!";
                outtextxy(510, 310, errorMessage.c_str());
                ShowReg();
                outIns();
            }
        }
        //350  251
        else if (mouMes.uMsg == WM_LBUTTONDOWN && mouMes.x >= 350 && mouMes.x < 450 && mouMes.y>251 && mouMes.y < 298)//50 150 251 298
        {//下一页
            if (outputCur < input.size() - 15 && input.size() > 15)
            {
                initGraph();
                outputCur += 15;
                ShowReg();
                outIns();
            }
            else
            {
                clearrectangle(501, 301, 1000, 450);
                settextcolor(RED);
                string errorMessage = "ERROR:This is the last page!";
                outtextxy(510, 310, errorMessage.c_str());
                ShowReg();
                outIns();
            }
        }
        else if (mouMes.uMsg == WM_LBUTTONDOWN && mouMes.x >= 520 && mouMes.x < 680 && mouMes.y>251 && mouMes.y < 298)
        {//520 251 单步执行
            if (excuteStep == 15)
            {
                excuteStep = 0;
                if (input.size() > 15 && input.size() - 15 > outputCur)
                {
                    outputCur += 15;
                    initGraph();
                    ShowReg();
                    outIns();
                    settextcolor(RED);
                    string errorMessage = "Next Page!";
                    clearrectangle(501, 301, 1000, 317);//
                    outtextxy(510, 310, errorMessage.c_str());
                }
            }
            if (input.size() > 0 && excuteNum < input.size())
            {
                ExecuteByStep();
                excuteStep += 1;
                excuteNum++;
                IMAGE img1;
                loadimage(&img1, _T("excutePointer.png"));
                putimage(0, excuteStep*16, &img1);
                ShowReg();
                outIns();
            }
            else if (input.size() == excuteNum)//指令执行完毕
            {
                clearrectangle(501, 301, 1000, 317);
                settextcolor(RED);
                string errorMessage = "We have excute all the instruction in the memory!";
                outtextxy(510, 310, errorMessage.c_str());
                ShowReg();
                outIns();
            }
            else 
            {
                clearrectangle(501, 301, 1000, 317);
                settextcolor(RED);
                string errorMessage = "ERROR:There is no instruction in the memory!";
                outtextxy(510, 310, errorMessage.c_str());
                ShowReg();
                outIns();
            }
        }
        
    }
    closegraph();
    return 0;
}

void initGraph()
{
    setbkcolor(WHITE);
    cleardevice();//背景改为白色
    settextstyle(16, 0, _T("宋体"));
    setlinecolor(BLACK);//画两条黑色线
    line(0, 300, 1000, 300);
    line(500, 0, 500, 450); //中心是500 300
    setlinecolor(BLUE);
    line(35, 9, 35, 250);
    line(535, 9, 535, 250);
    //RECT r = { 0, 0, 500, 300 };
    //settextcolor(BLACK);
    //drawtext(_T("Hello World"), &r, DT_LEFT | DT_TOP);

    setlinecolor(LIGHTGRAY);//画边框
    rectangle(10, 9, 480, 250);
    rectangle(510, 9, 980, 250);
    rectangle(10, 309, 480, 450);
    rectangle(9, 451, 565, 591);

    IMAGE img1;
    loadimage(&img1, _T("asmButtonBlue.png"));
    putimage(200, 251, &img1);

    IMAGE img2;
    loadimage(&img2, _T("rasmButtonBlue.png"));
    putimage(700, 251, &img2);

    IMAGE img3;
    loadimage(&img3, _T("lastPage.png"));
    putimage(50, 251, &img3);
    putimage(700, 460, &img3);

    IMAGE img4;
    loadimage(&img4, _T("nextPage.png"));
    putimage(350, 251, &img4);
    putimage(700, 520, &img4);

    IMAGE img5;
    loadimage(&img5, _T("excuteStep.png"));
    putimage(520, 251, &img5);

    int hei = 16;
    int trueHei = 10;
    settextcolor(GREEN);
    string order[15] = { " 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10","11","12","13","14","15" };
    for (int i = 0; i < 15; i++)
    {
        outtextxy(15, trueHei, order[i].c_str());
        //int x=textwidth("15");
        trueHei += hei;
    }
    trueHei = 10;
    for (int i = 0; i < 15; i++)
    {
        outtextxy(515, trueHei, order[i].c_str());
        trueHei += hei;
    }
}

void initReg()
{
    regName.clear();
    string s = "$zero:";
    regName.push_back(s);
    s = "$at  :";
    regName.push_back(s);
    s = "$v0  :";
    regName.push_back(s);
    s = "$v1  :";
    regName.push_back(s);
    s = "$a0  :";
    regName.push_back(s);
    s = "$a1  :";
    regName.push_back(s);
    s = "$a2  :";
    regName.push_back(s);
    s = "$a3  :";
    regName.push_back(s);
    s = "$t0  :";
    regName.push_back(s);
    s = "$t1  :";
    regName.push_back(s);
    s = "$t2  :";
    regName.push_back(s);
    s = "$t3  :";
    regName.push_back(s);
    s = "$t4  :";
    regName.push_back(s);
    s = "$t5  :";
    regName.push_back(s);
    s = "$t6  :";
    regName.push_back(s);
    s = "$t7  :";
    regName.push_back(s);
    s = "$s0  :";
    regName.push_back(s);
    s = "$s1  :";
    regName.push_back(s);
    s = "$s2  :";
    regName.push_back(s);
    s = "$s3  :";
    regName.push_back(s);
    s = "$s4  :";
    regName.push_back(s);
    s = "$s5  :";
    regName.push_back(s);
    s = "$s6  :";
    regName.push_back(s);
    s = "$s7  :";
    regName.push_back(s);
    s = "$t8  :";
    regName.push_back(s);
    s = "$t9  :";
    regName.push_back(s);
    s = "$k0  :";
    regName.push_back(s);
    s = "$k1  :";
    regName.push_back(s);
    s = "$gp  :";
    regName.push_back(s);
    s = "$sp  :";
    regName.push_back(s);
    s = "$fp  :";
    regName.push_back(s);
    s = "$ra  :";
    regName.push_back(s);
}

void getInput()
{
    char s[100];
    memset(s, '\0', 100);
    while (strcmp(s,"exit")!=0)
    {
        strcpy(s, "exit");
        InputBox(s, 100, "Please input only one instruction!", NULL, NULL, 0, 0, false);
        if (strcmp(s, "exit") != 0)
        {
            string temp = string(s);
            bool flag = assembler(s);
            if (flag == true)
            {
                input.push_back(temp);
            }
            else
            {
                char errorInfo[40] = "Invalid input, please input again";
                clearrectangle(501, 301, 1000, 450);
                settextcolor(RED);
                outtextxy(510, 310, errorInfo);
                break;
            }
        }
    }
}

void outIns()
{
    //RECT r = { 0, 0, 500, 300 };
    clearrectangle(36, 10, 478, 248);
    settextcolor(BLACK);
    int hei= 16;
    int trueHei = 10;
    for (int i = outputCur; i < 15 + outputCur && i < input.size(); i++)
    {
        outtextxy(36, trueHei, input[i].c_str());
        outtextxy(536, trueHei, inputAsm[i].c_str());
        trueHei += hei;
    }
}

void ExecuteByStep()
{
    dword code,tem;
    if(PC<sp)
    code=MEM[PC]+(MEM[PC+1]<<8)+(MEM[PC+2]<<16)+(MEM[PC+3]<<24);
    int opcode=code>>26;
    int type=GetType(opcode);
    int rs,rt,rd,sham,fun,dat,temp;
    word temp1;
    int mask=0x1F;
    switch(type)
    {
        case 0://R
        {
            rs=(code>>21)&mask;
            rt=(code>>16)&mask;
            rd=(code>>11)&mask;
            sham=(code>>6)&mask;
            fun=(code&0x3F);
            switch(fun)
            {
                case 0:REG[rd]=REG[rs]<<sham;PC=PC+4;break;//sll
                case 2:
                    if (opcode == 28)//mul
                    {
                        REG[rd] = REG[rs] * REG[rd];
                    }
                    else//srl
                    {
                        REG[rd] = REG[rs] >> sham; PC = PC + 4;
                    }
                    break;//srl
                case 3:REG[rd]=REG[rs]>>sham;PC=PC+4;break;//sra
                case 4:REG[rd]=REG[rs]<<REG[rt];PC=PC+4;break;//sllv
                case 6:REG[rd]=REG[rs]>>REG[rt];PC=PC+4;break;//srlv
                case 7:REG[rd]=REG[rs]>>REG[rt];PC=PC+4;break;//srav
                case 8:PC=REG[rs];break;               //jr
                case 9:REG[rd] = PC; PC = REG[rs];//jalr
                case 32:REG[rd]=(int)(REG[rs]+REG[rt]);PC=PC+4;break;//add
                case 33:REG[rd]=REG[rs]+REG[rt];PC=PC+4;break;//addu
                case 34:REG[rd]=(int)(REG[rs]-REG[rt]);PC=PC+4;break;//sub
                case 35:REG[rd]=REG[rs]-REG[rt];PC=PC+4;break;//subu
                case 36:REG[rd]=REG[rs]&REG[rt];PC=PC+4;break;//and
                case 37:REG[rd]=REG[rs]|REG[rt];PC=PC+4;break;//or
                case 38:REG[rd]=REG[rs]^REG[rt];PC=PC+4;break;//xor
                case 39:REG[rd]=~(REG[rs]|REG[rt]);PC=PC+4;break;//nor
                case 42:if((int)REG[rs]<(int)REG[rt]) REG[rd]=1;else REG[rd]=0;PC=PC+4;break;//slt 
                case 43:if(REG[rs]<REG[rt]) REG[rd]=1;else REG[rd]=0;PC=PC+4;break;//sltu
            }
        }
        break;
        case 1://j
        {
            sham=code&0x03FFFFFF;
            if(opcode==2) 
            {
                PC=((PC+4)&0xF0000000)+(sham<<2);
            }
            else if(opcode==3)
            {
                REG[31]=PC+4;
                PC=(PC+4)&0xF0000000+(sham<<2);
            }
        }
        break;
        case 2://i
        {
            rs=(code>>21)&0x1F;
            rt=(code>>16)&0x1F;
            dat=code&0xFFFF;
            switch(opcode)
            {
                case 4:if (REG[rs] == REG[rt]) PC = PC + 4 + (dat << 2); else PC = PC + 4; break;//beq
                case 5:if (REG[rs] != REG[rt]) PC = PC + 4 + (dat << 2); else PC = PC + 4; break;//bne
                case 6:
                    if (rs >= 0)
                    {
                        REG[31] = PC;
                        PC += dat;
                    }
                    break;
                case 8:REG[rt]=REG[rs]+dat;PC=PC+4;break;//addi
                case 12:REG[rt]=REG[rs]&dat;PC=PC+4;break;//andi
                case 13:REG[rt]=REG[rs]|dat;PC=PC+4;break;//ori
                case 14:REG[rt]=REG[rs]^dat;PC=PC+4;break;//xori
                case 15:REG[rt]=dat<<16;PC=PC+4;break;//lui
                case 32:
                    tem = REG[rs] + dat; 
                    temp1 = (MEM[tem]<<8) + (MEM[tem + 1]);
                    if (temp1 & 0x8000 == 0x8000)
                    {
                        REG[rt] = (0xffff << 16) | temp1;
                    }
                    else
                    {
                        REG[rt] = (0 << 16) | temp1;
                    }
                    PC = PC + 4; break;
                case 33://lh 扩展为32位
                    tem = REG[rs] + dat; 
                    temp1 = MEM[tem] + (MEM[tem + 1] << 8);
                    if (temp1 & 0x8000 == 0x8000)
                    {
                        REG[rt] = (0xffff << 16) | temp1;
                    }
                    else
                    {
                        REG[rt] = (0 << 16) | temp1;
                    }
                    PC = PC + 4; break;
                case 34:tem = REG[rs] + dat;REG[rt] = (MEM[tem] << 24) + (MEM[tem + 1] << 16) + (MEM[tem + 2] << 8) + (MEM[tem + 3]);PC = PC + 4; break;//lwx
                case 35:tem=REG[rs]+dat;REG[rt]=MEM[tem]+(MEM[tem+1]<<8)+(MEM[tem+2]<<16)+(MEM[tem+3]<<24);PC=PC+4;break;//lw
                case 36://lhux 小头扩充0
                    tem = REG[rs] + dat;
                    temp1 = (MEM[tem] << 8) + (MEM[tem + 1]);
                    REG[rt] = (0 << 16) | temp1;
                    PC = PC + 4; break;
                case 37://lhu 扩充0
                    tem = REG[rs] + dat;
                    temp1 = MEM[tem] + (MEM[tem + 1] << 8);
                    REG[rt] = (0 << 16) | temp1;
                    PC = PC + 4; break;
                case 41:
                    temp = REG[rt] & 0xffff;
                    MEM[REG[rs] + dat] = temp;
                    PC += 4; break;
                case 42://swx 小头模式
                    MEM[REG[rs] + dat] = swap32Big2Little(REG[rt]);
                    PC += 4; break;
                case 43:MEM[REG[rs]+dat]=REG[rt];PC=PC+4;break;//sw
            }
        }
        break;
    }
    char pcInfo[10];
    sprintf(pcInfo, "%04X", PC);
    char pcOut[20] = "PC = ";
    strcat(pcOut, pcInfo);
    settextcolor(CYAN);
    clearrectangle(501, 327, 1000, 343);
    outtextxy(510, 327, pcOut);
}

void ShowReg()
{
  int i = 0;
  char c[8];
  string outRS;
  for (i = 0; i < 32; i++)
  {
      memset(c, '\0', 8);
      sprintf(c, "%d", REG[i]);
      for (int j = 0; j<8; j++)
      {
          if (c[j] != '\0')
          {
            regName[i] += c[j];
          }
          else
          {
              regName[i] += ' ';
          }
      }
  }
  int stPo=310;
  clearrectangle(11, 310, 479, 450);
  settextcolor(RED);
  for (i = 0; i < 8; i++)
  {
      settextstyle(16, 0, _T("宋体"));
      string outR = regName[i * 4] + regName[4 * i + 1] + regName[4 * i + 2] + regName[4 * i + 3];
      outtextxy(11, stPo, outR.c_str());
      stPo += textheight(outR.c_str());
  }

  //10, 451, 980, 590
  
  clearrectangle(10, 451, 562.5, 590);
  char outMem[64];
  char outPage[2];
  memset(outPage, 0, 2);
  sprintf(outPage, "%d", memPage);
  outtextxy(750, 505, outPage);
  for (int i = 0; i < 8; i++)
  { 
      memset(outMem, 0, 64);
      for (int j = 0; j < 64; j++)
      {
          outMem[j] = MEM[i * 64 + j + 512 * memPage] + '0';
      }
      RECT r = { 11, 452+i*16, 562.2, 452+i*16+16 };
      drawtext(outMem, &r, DT_LEFT | DT_TOP | DT_WORD_ELLIPSIS);
  }
  

  
}

void GetInst(char s[],dword code)
{
    int opcode=code>>26;
    int type=GetType(opcode);
    int rs,rt,rd,sham,fun,dat;
    char op[20],r_s[20],r_t[20],r_d[20],shift[20],datt[20];
    int mask=0x1F;
    switch(type)
    {
        case 0://R
        {
            rs=(code>>21)&mask;
            rt=(code>>16)&mask;
            rd=(code>>11)&mask;
            sham=(code>>6)&mask;
            fun=(code&0x3F);
            GetReg(rs,r_s);
            GetReg(rt,r_t);
            GetReg(rd,r_d);
            itoa(sham,shift,10);
            GetRInst(op,fun);  
            switch(fun)
            {
                case 32:case 33:case 34:case 35:case 36:case 37:case 38:case 39:case 42:case 43:case 4:case 6:case 7:
                {
                    strcpy(s,op);strcat(s," ");
                    strcat(s,r_d);strcat(s,",");
                    strcat(s,r_s);strcat(s,",");
                    strcat(s,r_t);
                    printf("%s\n",s);
                }
                break;
                case 0:case 2:case 3:
                {
                    strcpy(s,op);strcat(s," ");
                    strcat(s,r_d);strcat(s,",");
                    strcat(s,r_s);strcat(s,",");
                    strcat(s,shift);
                    printf("%s\n",s);
                }
                break;
                case 8:
                {
                    strcpy(s,op);strcat(s," ");
                    strcat(s,r_s);printf("%s\n",s);
                }
                break;
            }
        }
        break;
        case 1://J
        {
            sham=code&0x03FFFFFF;
            itoa(sham,shift,10);
            switch(opcode)
            {
                case 2://J
                {
                    strcpy(s,"j ,");strcat(s,shift);
                    printf("%s\n",s);
                }
                break;
                case 3://Jar
                {
                    strcpy(s,"jar ,");strcat(s,shift);
                    printf("%s\n",s);
                }
                break;
            }
        }
        case 2://I
        {
            rs=(code>>21)&mask;
            rt=(code>>16)&mask;
            dat=code&0xFFFF;
            GetReg(rs,r_s);
            GetReg(rt,r_t);
            itoa(dat,datt,10);
            GetIInst(op,opcode);
            switch(opcode)
            {
                case 8:case 9:case 12:case 13:case 14:case 4:case 5:case 10:case 11:
                {
                    strcpy(s,op);strcat(s," ");
                    strcat(s,r_t);strcat(s,",");
                    strcat(s,r_s);strcat(s,",");
                    strcat(s,datt);
                    printf("%s\n",s);
                }
                break;
                case 35:case 43:
                {
                    strcpy(s,op);strcat(s," ");
                    strcat(s,r_t);strcat(s,",");
                    strcat(s,datt);strcat(s,"(");
                    strcat(s,r_s);strcat(s,")");
                    printf("%s\n",s);
                }
                break;
                case 15:
                {
                    strcpy(s,op);strcat(s," ");
                    strcat(s,r_t);strcat(s,",");
                    strcat(s,datt);
                    printf("%s\n",s);
                }
                break;
            }
        }
        break;
    }
    return;
}

void GetReg(int n, char* op)                              
{
    strcpy(op,"$");
    if (n==0) strcat(op,"zero");
    else if(n==1) strcat (op,"at");
    else if(n>=2&&n<=3)
    {
        op[1]='v';
        op[2]=n-2+'0';
        op[3]='\0';
    }
    else if(n>=4&&n<=7)
    {
        op[1]='a';
        op[2]=n-4+'0';
        op[3]='\0';
    }
    else if(n>=8&&n<=15)
    {
        op[1]='t';
        op[2]=n-8 +'0';
        op[3]='\0';
    }
    else if(n>=16&&n<=23)
    {
        op[1]='s';
        op[2]=n-16+'0';
        op[3]='\0';
    }
    else if(n>=24&&n<=25)
    {
        op[1]='t';
        op[2]=n-24+'8';
        op[3]='\0';
    }
    else if(n>=26&&n<=27)
    {
        op[1]='k';
        op[2]=n-26+'0';
        op[3]='\0';
    }
    else if (n==28) strcat (op, "gp");
    else if (n==29) strcat (op, "sp");
    else if (n==30) strcat (op, "fp");
    else if (n==31) strcat (op, "ra");
}

void GetIInst(char*op,int n)
{                                     
    switch (n)
    {
        case 8 :strcpy (op, "addi");break;
        case 9 :strcpy (op, "addiu");break;
        case 12 :strcpy (op, "andi");break;
        case 13 :strcpy (op, "ori");break;
        case 14 :strcpy (op, "xori");break;
        case 15 :strcpy (op, "lui");break;
        case 35 :strcpy (op, "lw");break;
        case 43 :strcpy (op, "sw");break;
        case 4 :strcpy (op, "beq");break;
        case 5 :strcpy (op, "bne");break;
        case 10 :strcpy (op, "slti");break;
        case 11 :strcpy (op, "sltiu");break;
    }
}

void GetRInst(char*op,int func)                        
{
    switch (func)
    {
        case 0 :strcpy (op,"sll");break;
        case 2 :strcpy (op,"srl");break;
        case 3 :strcpy (op,"sra");break;
        case 4 :strcpy (op,"sllv");break;
        case 6 :strcpy (op,"srlv");break;
        case 7 :strcpy (op,"srav");break;
        case 8 :strcpy (op,"jr");break;
        case 32 :strcpy(op,"add");break;
        case 33 :strcpy(op,"addu");break;
        case 34 :strcpy(op, "sub");break;
        case 35 :strcpy(op,"subu");break;
        case 36 :strcpy(op,"and");break;
        case 37 :strcpy(op,"or");break;
        case 38 :strcpy(op,"xor");break;
        case 39 :strcpy(op,"nor");break;
        case 42 :strcpy(op,"slt");break;
        case 43 :strcpy(op,"sltu");break;
    }
}

int GetType(int opcode)
{
    int type=0; //0:R 1:J 2:I
    switch(opcode)
    {
        case 0:type=0;break;
        case 2:case 3:type=1;break;
        default:type=2;break;
    }
    return type;
}

bool assembler(char*inst)
{
    if (strlen(inst) < 6)
    {
        return false;
    }
    char op1[20],op2[20],op3[20],op4[20];
    int r1,r2,r3;
    delete_label(inst);
    fetch(inst,op1);
    fetch(inst,op2);
    fetch(inst,op3);
    fetch(inst,op4);
    r1=str2reg(op2);
    r2=str2reg(op3);
    r3=str2reg(op4);
    dword machine=0;
    int op,shamt,func;
    bool flag = true;
    switch (op1[0])
    {
        case 'a':  //add addu addi and andi 
            if (op1[1] == 'd')
            {
                if (op1[3] == 'u')                        
                {
                    op=0;shamt=0;func=33;
                    machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                }
                else if (op1[3] == 'i')
                {
                    if (op1[4]=='u')                          
                    {
                        op=9;
                        machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
                    }
                    else                                       
                    {
                        op=8;
                        machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
                    }
                }
                else                                           
                {
                    op=0;shamt=0;func=32;
                    machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                }
            }
            if (op1[1]=='n')
            {
                if(op1[3]=='i')                            
                {
                    op=12;
                    machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
                }
                else                                            
                {
                    op=0;shamt=0;func=36;
                    machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                }
            }
            break;
        case 'b': //beq bne 
            if (op1[1]=='e')                                  
            {
                op=4;
                machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
            }
            else if(op1[1] =='n')                             
            {
                op=5;
                machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
            }
            else if (op1[1] == 'g')
            {
                op = 1;
                machine = (op << 26) | (17 & 31) << 16 | (r1 << 21) | (((r2 - PC - 2) >> 1) & 0xffff);
            }
            break;
        case 'd':
            if (op1[3] == 'u')//divu
            {
                op = 0;
                machine = (op << 26) | (r1 << 21) | (r2 << 16) | (27 & 63);
            }
            else if (strcmp(op1, "div") == 0)
            {
                op = 0;
                machine = (op << 26) | (r1 << 21) | (r2 << 16) | (26 & 63);
            }
            break;
        case 'j': //j jal jr jalr
            if (op1[1] == 'a')                                  
            {
                if (op1[2] == 'l' && op1[3] == 'r')
                {
                    op = 0;
                    machine = (op << 26) | (9 & 63) | (r1 << 21) | (r2 << 11);
                }
                else
                {
                    op = 3;
                    machine = (op << 26) | r1;
                }
            }
            else if (op1[1]=='r')                             
            {
                op=0;shamt=0;func=8;
                machine=(op<<26)|(r1<<21)|(shamt<<6)|func;
            }
            else                                               
            {
                op=2;
                machine=(op<<26)|(r1&0x03FFFFFF);
            }
            break;
        case 'l': //lui lw
            if (op1[1]=='u')                                
            {
                op=15;
                machine=(op<<26)|(r1<<16)|(r2);
            }
            else if (op1[1] == 'h')//lh lhu lhux i//
            {
                if (op1[2] == 'u')
                {
                    if (op1[3] == 'x')//lhux
                    {
                        op = 36;
                        machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) | (r3 << 21);
                    }
                    else//lhu
                    {
                        op = 37;
                        machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) |(r3 << 21);
                    }
                }
                else//lh
                {
                    op = 33;
                    machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) | (r3 << 21);
                }
            }
            else if (op1[1]=='w'&&op1[2]!='x')                             
            {
                op=35;
                machine=(op<<26)|(r3<<21)|(r1<<16)|(r2);
            }
            else if (op1[1] == 'w' && op1[2] == 'x')//lwx i//
            {
                op = 34;
                machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) | r3 << 21;
            }
            break;
        case 'm': //move
            if(strcmp("move",op1)==0)
            {
                op=0;shamt=0;func=37;
                machine=(op<<26)|(r2<<21)|(r1<<11)|(shamt<<6)|func;
            }
            else if (op1[1] == 'u')
            {
                if (op1[2] == 'l' && op1[3] == 't')
                {
                    if (op1[4] == 'u')
                    {
                        op = 0;
                        machine = (op << 26) | (r1 << 21) | (r2 << 16) | (25 & 63);
                    }
                    else
                    {
                        op = 0;
                        machine = (op << 26) | (r1 << 21) | (r2 << 16) | (24 & 63);
                    }
                }
                else
                {
                    op = 28;
                    machine = (op << 26) | (r1 << 11) | (r2 << 21) | (r3 << 16) | (2 & 63);
                }
            }
            break;
        case 'n': //nor
            if (op1[1]=='o')                                  
            {
                op=0;shamt=0;func=39;
                machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
            }
            break;
        case 'o': //or ori
            if (op1[1]=='r')
            {
                if (op1[2]=='i')                              
                {
                    op=13;
                    machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
                }
                else                                            
                {
                    op=0;shamt=0;func=37;
                    machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                }
            }
            break;
        case 's': //sll sllv slt slti sltiu sltu srl sub subi sw swx sh
            //srl srlv srav
            if (op1[1]=='l')
            {
                if (op1[2]=='l')
                {
                    if (op2[3]=='v')                          
                    {
                        op=0;shamt=0;func=4;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                    else                                        
                    {
                        op=0;func=0;
                        machine=(op<<26)|(r2<<21)|(r1<<11)|(r3<<6)|func;
                        break;
                    }
                }
                else if (op1[2]=='t')
                {
                    if (op1[3]=='i')
                    {
                        if (op1[4]=='u')                    
                        {
                            op=11;
                            machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
                        }
                        else                                    
                        {
                            op=10;
                            machine=(op<<26)|(r2<<21)|(r1<<16)|(r3&0x0000FFFF);
                        }
                    }
                    else if (op1[3]=='u')                     
                    {
                        op=0;shamt=0;func=43;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                    else                                        
                    {
                        op=0;shamt=0;func=42;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                }
            }
            else if (op1[1] == 'h')
            {
                if (op1[2] == 'x')//shx
                {
                    op = 40;
                    machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) | (r3 << 21);
                }
                else//sh
                {
                    op = 41;
                    machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) | (r3 << 21);
                }
            }
            else if (op1[1]=='r')
            {
                if (op1[2]=='a')
                {
                    if (op1[3]=='v')                          
                    {
                        op=0;shamt=0;func=7;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                    else                                        
                    {
                        op=0;func=3;
                        machine=(op<<26)|(r2<<21)|(r1<<11)|(r3<<6)|func;
                    }
                }
                else if (op1[2]=='l')
                {
                    if (op1[3]=='v')                          
                    {
                        op=0;shamt=0;func=6;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                    else                                        
                    {
                        op=0;func=2;
                        machine=(op<<26)|(r2<<21)|(r1<<11)|(r3<<6)|func;
                    }
                }
            }
            else if (op1[1]=='u')
            {
                if (op1[2]=='b')
                {
                    if (op1[3]=='u')                          
                    {
                        op=0;shamt=0;func=35;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                    else                                        
                    {
                        op=0;shamt=0;func=34;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                }
            }
            else if (op1[1]=='w')                             
            {
                if (op1[2] == 'x')//swx//
                {
                    op = 42;
                    machine = (op << 26) | (r1 << 16) | (r2 & 0xffff) | (r3 << 21);
                }
                else//sw
                {
                    op = 43;
                    machine = (op << 26) | (r3 << 21) | (r1 << 16) | (r2);
                }
            }
            break;
        case 'x': //xor xori
            if (op1[1]=='o')
            {
                if (op1[2]=='r')
                {
                    if (op1[3]=='i')                          
                    {
                        op=14;
                        machine=(op<<26)|(r2<<21)|(r1<<16)|(r3);
                    }
                    else                                        
                    {
                        op=0;shamt=0;func=38;
                        machine=(op<<26)|(r2<<21)|(r3<<16)|(r1<<11)|(shamt<<6)|func;
                    }
                }
            }
            break;
        
        default:
            flag = false;
    }
    if (flag == true)
    {
        DemToBin(machine);
        byte m=0xFF;              //存盘
        for(int i=0;i<=3;i++)
        {
            MEM[sp+i]=m&machine;
            machine>>=8;        
        }
        sp+=4;  
        return true;
    }
    else
    {
        string errorMessage = "Invalid instruction!";
        clearrectangle(501, 301, 1000, 450);
        outtextxy(510, 310, errorMessage.c_str());
        return false;
    }
    
}

void fetch(char*inst,char*s)
{
    int i=0,j=0;
    while(((inst[i]>='0'&&inst[i]<='9')||(inst[i]>='a'&&inst[i]<='z')||(inst[i]=='$')||inst[i]=='@')==0)
    {
        if(inst[i]=='\0')
        {
            *s=NULL;
            return ;
        }
        i++;
    }
    while((inst[i]>='0'&&inst[i]<='9')||(inst[i]>='a'&&inst[i]<='z')||(inst[i]=='$')||inst[i]=='@')
    {
        s[j++]=inst[i];
        inst[i]=' ';
        i++;
    }
    s[j]='\0';
}

void delete_label(char*inst)
{
    int i=0,j=0;
    while(((inst[i]>='0'&&inst[i]<='9')||(inst[i]>='a'&&inst[i]<='z')||(inst[i]=='$')||(inst[i]=='@'))==0)
    {
        if(inst[i]=='\0') return ;
        i++;
    }
    if(inst[i]=='@')
    {
        while((inst[i]>='0'&&inst[i]<='9')||(inst[i]>='a'&&inst[i]<='z')||(inst[i]=='$')||(inst[i]=='@'))
        {
            inst[i]=' ';
            i++;
        }
    }
}

int str2reg(char* str)                                 
{
    int i=0,sum=0;
    if (str[0] == '$')  //reg type                                            
    {
        switch(str[1])
        {
            case 'z' :  return 0;break;
            case 'a' :
              switch(str[2])
              {
                case 't' :  return 1;break;
                case '0' :  return 4;break;
                case '1' :  return 5;break;
                case '2' :  return 6;break;
                case '3' :  return 7;break;
              }break;
            case 'v' :
              switch(str[2])
              {
                case '0' : return 2;break;
                case '1' : return 3;break;
              }break;
            case 't' :
              switch(str[2])
              {
                case '0' :return 8;break;
                case '1' :return 9;break;
                case '2' :return 10;break;
                case '3' :return 11;;break;
                case '4' :return 12;;break;
                case '5' :return 13;break;
                case '6' :return 14;break;
                case '7' :return 15;break;
                case '8' :return 24;break;
                case '9' :return 25;break;
              }break;
            case 's' :
              switch(str[2])
              {
                case '0' :return 16;break;
                case '1' :return 17;break;
                case '2' :return 18;break;
                case '3' :return 19;break;
                case '4' :return 20;break;
                case '5' :return 21;break;
                case '6' :return 22;break;
                case '7' :return 23;break;
                case 'p' :return 29;break;
              }break;
            case 'g' :return 28;break;
            case 'f' :return 30;break;
            case 'r' :return 31;break;
        }
    }
    else if(str[0]=='@')
    {
        int i;
        for(i=0;i<lsp;i++)
        {
            if(!strcmp(str,label[i])) break;
        }
        return position[i]-sp-4;
    }
    else     //shamt part               
    {
        while(str[i] >='0'&& str[i]<='9')
        {
            sum=sum*10+str[i]-'0';
            i++;
        }
        return sum;
    }
}

void UppToLow(string str)     //小写转大写
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i]-'A'+'a';
        i++;
    }
}

void DemToBin(dword machine)
{
    dword m=0x80000000;
    string temp="";
    for(int i=0;i<=31;i++)
    {
        if ((m & machine) != 0) temp += "1";
        else temp += "0";
        m>>=1;
    }
    //printf("\n");
    inputAsm.push_back(temp);
}

void Createlabel()
{
    FILE *fp;
    if ((fp=fopen("instruction.txt", "r"))==NULL)
    {
        printf("Error! opening file");
        exit(1);         
    }
    int cur=0;
    while(!feof(fp))
    {
        fgets(inst,50,fp);
        UppToLow(inst);
        int i=0,j=0;
        char op1[20];
        while(((inst[i]>='0'&&inst[i]<='9')||(inst[i]>='a'&&inst[i]<='z')||(inst[i]=='$')||(inst[i]=='@'))==0)
        {
            if(inst[i]=='\0')
            {
                *op1=NULL;
                return ;
            }
            i++;
        }
        while((inst[i]>='0'&&inst[i]<='9')||(inst[i]>='a'&&inst[i]<='z')||(inst[i]=='$')||(inst[i]=='@'))
        {
            op1[j++]=inst[i];
            inst[i]=' ';
            i++;
        }
        op1[j]='\0';
        if(op1[0]=='@')
        {
            int j,flag=0;

            for(j=0;j<lsp;j++)
            {
                if(!strcmp(op1,label[j])) {flag=1;break;}
            }
            if(flag==0) {strcpy(label[lsp],op1);position[lsp++]=cur;}
        }
        cur+=4;
    }
    fclose(fp);
}
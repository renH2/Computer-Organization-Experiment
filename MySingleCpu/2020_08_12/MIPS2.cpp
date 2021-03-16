#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char operations[6];
char operands[1005];
char reg[10005];
char Reg[10][1005];
char query[1005];
int total=0;
unsigned long ans;
int count,countnow = 0;
char ch; 
int flag = 1;
unsigned long regg[3];

struct mark
{
	int line;
	char name[10005];
}e[10005]; 

void solveReg(int x)//寄存器转化成对应的号码 
{
//	printf("判断时当前寄存器时%s\n",reg);
	if(!strcmp(reg,"$zero")) 	regg[x] = 0;
	else if(!strcmp(reg,"$at")) regg[x] = 1; 
	else if (!strcmp(reg,"$v0")) regg[x] = 2;
    else if (!strcmp(reg,"$v1")) regg[x] = 3;
    else if (!strcmp(reg,"$a0")) regg[x] = 4;
    else if (!strcmp(reg,"$a1")) regg[x] = 5;
    else if (!strcmp(reg,"$a2")) regg[x] = 6;
    else if (!strcmp(reg,"$a3")) regg[x] = 7;
    else if (!strcmp(reg,"$t0")) regg[x] = 8;
    else if (!strcmp(reg,"$t1")) regg[x] = 9;
    else if (!strcmp(reg,"$t2")) regg[x] = 10;
    else if (!strcmp(reg,"$t3")) regg[x] = 11;
    else if (!strcmp(reg,"$t4")) regg[x] = 12;
    else if (!strcmp(reg,"$t5")) regg[x] = 13;
    else if (!strcmp(reg,"$t6")) regg[x] = 14;
    else if (!strcmp(reg,"$t7")) regg[x] = 15;
    else if (!strcmp(reg,"$s0")) regg[x] = 16;
    else if (!strcmp(reg,"$s1")) regg[x] = 17;
    else if (!strcmp(reg,"$s2")) regg[x] = 18;
    else if (!strcmp(reg,"$s3")) regg[x] = 19;
    else if (!strcmp(reg,"$s4")) regg[x] = 20;
    else if (!strcmp(reg,"$s5")) regg[x] = 21;
    else if (!strcmp(reg,"$s6")) regg[x] = 22;
    else if (!strcmp(reg,"$s7")) regg[x] = 23;
    else if (!strcmp(reg,"$t8")) regg[x] = 24;
    else if (!strcmp(reg,"$t9")) regg[x] = 25;
    else if (!strcmp(reg,"$k0")) regg[x] = 26;
    else if (!strcmp(reg,"$k1")) regg[x] = 27;
    else if (!strcmp(reg,"$gp")) regg[x] = 28;
    else if (!strcmp(reg,"$sp")) regg[x] = 29;
    else if (!strcmp(reg,"$fp")) regg[x] = 30;
    else if (!strcmp(reg,"$ra")) regg[x] = 31;
}

void solvenum(unsigned long x,int i)//将数字转化成对应的寄存器 
{
    if (x == 0) strcpy(Reg[i],"$zero");
    if (x == 1) strcpy(Reg[i],"$at");
    if (x == 2) strcpy(Reg[i],"$v0");
    if (x == 3) strcpy(Reg[i],"$v1");
    if (x == 4) strcpy(Reg[i],"$a0");
    if (x == 5) strcpy(Reg[i],"$a1");
    if (x == 6) strcpy(Reg[i],"$a2");
    if (x == 7) strcpy(Reg[i],"$a3");
    if (x == 8) strcpy(Reg[i],"$t0");
    if (x == 9) strcpy(Reg[i],"$t1");
    if (x == 10) strcpy(Reg[i],"$t2");
    if (x == 11) strcpy(Reg[i],"$t3");
    if (x == 12) strcpy(Reg[i],"$t4");
    if (x == 13) strcpy(Reg[i],"$t5");
    if (x == 14) strcpy(Reg[i],"$t6");
    if (x == 15) strcpy(Reg[i],"$t7");
    if (x == 16) strcpy(Reg[i],"$s0");
    if (x == 17) strcpy(Reg[i],"$s1");
    if (x == 18) strcpy(Reg[i],"$s2");
    if (x == 19) strcpy(Reg[i],"$s3");
    if (x == 20) strcpy(Reg[i],"$s4");
    if (x == 21) strcpy(Reg[i],"$s5");
    if (x == 22) strcpy(Reg[i],"$s6");
    if (x == 23) strcpy(Reg[i],"$s7");
    if (x == 24) strcpy(Reg[i],"$t8");
    if (x == 25) strcpy(Reg[i],"$t9");
    if (x == 26) strcpy(Reg[i],"$k0");
    if (x == 27) strcpy(Reg[i],"$k1");
    if (x == 28) strcpy(Reg[i],"$gp");
    if (x == 29) strcpy(Reg[i],"$sp");
    if (x == 30) strcpy(Reg[i],"$fp");
    if (x == 31) strcpy(Reg[i],"$ra");
}
void assemble()//完成程序汇编转化成机器码 
{
	FILE *fp1=fopen("assemble.txt","r");
	FILE *fp2=fopen("output","wb");
	FILE *fp3=fopen("output.txt","w");
	if(!fp1)
	{
		printf("打开文件失败！\n");
		return;
	}
//	printf("开始\n");
	count = 0;
	total = 0;
	//第一次扫描 ，只把所有的行号存储起来！ 
	while(fscanf(fp1,"%s",query)!=EOF)
	{
		if(query[strlen(query)-1]==':')//如果是标号 
		{
			query[strlen(query)-1]='\0';
			e[total].line=count;
			strcpy(e[total].name,query);
			total++;
		}
		do
		{
			if(fscanf(fp1,"%c",&ch)==EOF) break;//只关心行号，行号后面的语句都不管 
		}while(ch!='\n');
		count+=4;
		
	}
/*	for (int i=0;i<total;i++)
	{
		printf("%s %d\n",e[i].name,e[i].line);
		
	}*/ 
	fseek(fp1,0,SEEK_SET);//第二次扫描
	count = 0;
	int immedia;
	int p,now;
	while(fscanf(fp1,"%s",operations)!=EOF)//读入第一行的第一个字符串 
	{
		if(operations[strlen(operations)-1]==':')
		    fscanf(fp1,"%s",operations);//如果是标号，那么第二个字符串才是 
		    if(!strcmp(operations,"add"))//如果是加法  
		    {
		    	//如果是add，我们规定格式应该为：add $s1, $s2, $s3 
		    	//也就是寄存器间必须有空格！ 
		    	for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    	//	printf("当前寄存器是%s ",reg);
		    		solveReg(i);
		    	//	printf("当前寄存器编号是%x\n",regg[i]);
				}	
				ans = 0x00000020|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if(!strcmp(operations,"sub"))//如果是加法  
		    {
		    	//如果是sub，我们规定格式应该为：sub $s1, $s2, $s3 
		    	//也就是寄存器间必须有空格！ 
		    	for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = 0x00000022|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if(!strcmp(operations,"slt"))//如果slt  
		    {
		    	//如果是slt，我们规定格式应该为：slt $s1, $s2, $s3 
		    	//也就是寄存器间必须有空格！ 
		    	for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = 0x0000002A|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if(!strcmp(operations,"lw"))//如果是lw
		    {
		    	//如果是lw，我们规定格式应该为：lw   $t0,2($st1)
		    	//寄存器间必须有空格,后面的一部分是整体读入的 
		    	fscanf(fp1,"%s",reg);//读取第一个寄存器
		    	reg[strlen(reg)-1]='\0';
			    solveReg(0);
			    fscanf(fp1,"%s",query);
			    immedia = 0;
			    p=0,now= 0;
			    if(query[0]=='-')
			    query[0]='0',flag = -1;
			    for (int i=0;i<strlen(query);i++)
			    {
			    	if(query[i]<='9'&&query[i]>='0')
			    	{
			    		immedia = immedia *10+query[i]-'0';
					}
					else if(query[i]=='(')
					{
					    int ccnt=0; 
						now=i+1;
						while(query[now]!=')')
						{
							reg[ccnt]=query[now];
							now++;
							ccnt++;
						}
						reg[ccnt]='\0';
						solveReg(1);
						break;
					}
				}
				immedia = immedia*flag;
			//	printf("第一个寄存器：%x 第二个寄存器:%x\n",regg[0],regg[1]);
				ans = 0x8C000000|(regg[1]<<21)|(regg[0]<<16);
				ans = ans|((unsigned long)immedia)<<16>>16;
				flag = 1;
			}
			else if(!strcmp(operations,"sw"))//如果是sw
		    {
		    	//如果是sw，我们规定格式应该为：sw   $t0,2($st1)
		    	//寄存器间必须有空格,后面的一部分是整体读入的 
		    	fscanf(fp1,"%s",reg);//读取第一个寄存器
		    	reg[strlen(reg)-1]='\0';
			    solveReg(0);
			    fscanf(fp1,"%s",query);
			    immedia = 0;
			    p=0,now= 0;
			    if(query[0]=='-')
			    flag=-1,query[0]='0';
			    for (int i=0;i<strlen(query);i++)
			    {
			    	if(query[i]<='9'&&query[i]>='0')
			    	{
			    		immedia = immedia *10+query[i]-'0';
					}
					else if(query[i]=='(')
					{
					    int ccnt=0; 
						now=i+1;
						while(query[now]!=')')
						{
							reg[ccnt]=query[now];
							now++;
							ccnt++;
						}
						reg[ccnt]='\0';
						solveReg(1);
						break;
					}
				}
				immedia = immedia*flag;
				ans = 0xAC000000|(regg[1]<<21)|(regg[0]<<16);
				ans = ans|((unsigned long)immedia)<<16>>16;
				flag = 1;
			}
			else if(!strcmp(operations,"beq"))//如果是beq 
			{
			//格式为： beq $s1, $s2, 1234 or beq $s1, $s2, RR
			//格式要求：寄存器间带空格，同时最后一项，如果是标号则开头不能带数字！ 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = 0x10000000|(regg[1]<<21)|(regg[0]<<16); 
				fscanf(fp1,"%s",query);
				//printf("query = %s\n",query);
				if((query[0]>='0'&&query[0]<='9')||query[0]=='-')//直接显示跳转地址！
				{
					immedia =0;
					if(query[0]=='-')
					query[0]='0',flag = -1;
					for (int i=0;i<strlen(query);i++)
					{
						immedia = immedia*10+query[i]-'0';
					}
					immedia =immedia *flag;
					ans = ans|(((unsigned long)immedia)<<16>>16);
					flag = 1;
			    }
				else//标号 
				{
					immedia =0;
					for (int i=0;i<total;i++)
					{
						if(!strcmp(e[i].name,query))
						{
							immedia = e[i].line-count-4;//目标-PC-4 
							break;
						}
					}
			//		printf("immedia = %d\n",immedia);
					ans = ans|((((unsigned long)immedia>>2))&0xFFFF);
				}	
			}
			else if(!strcmp(operations,"j"))//如果是j 
			{
				//格式为j RR or j 1234 
				//对于标号格式要求与beq相同！
				fscanf(fp1,"%s",query);//直接读标号或者转移地址 
				if((query[0]>='0'&&query[0]<='9')||query[0]=='-')//直接显示跳转地址！
				{
					immedia =0;
					if(query[0]=='-')
					query[0]='0',flag = -1;
					for (int i=0;i<strlen(query);i++)
					{
						immedia = immedia*10+query[i]-'0';
					}
					immedia *=flag;
					ans = 0x08000000|((unsigned long)(immedia));
					flag = 1;
			    }
				else//标号 
				{
					immedia =0;
					for (int i=0;i<total;i++)
					{
						if(!strcmp(e[i].name,query))
						{
							immedia = e[i].line;
							break;
						}
					}
					ans = (2<<26)|(((unsigned long) immedia>>2)&0x3FFFFFF);
				}	 
			}
			else if(!strcmp(operations,"bne"))
			{
				//格式为： bne $s1, $s2, 1234 or bne $s1, $s2, RR
			    //格式要求：寄存器间带空格，同时最后一项，如果是标号则开头不能带数字！ 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (5<<26)|(regg[1]<<21)|(regg[0]<<16); 
				fscanf(fp1,"%s",query);
				if((query[0]>='0'&&query[0]<='9')||(query[0]=='-'))//直接显示跳转地址！
				{
					if(query[0]=='-')
					query[0]='0',flag = -1;
					for (int i=0;i<strlen(query);i++)
					{
						immedia = immedia*10+query[i]-'0';
					}
					immedia *=flag;
					ans = ans|(((unsigned long)immedia)<<16>>16);
					flag = 1;
			    }
				else//标号 
				{
					immedia =0;
					for (int i=0;i<total;i++)
					{
						if(!strcmp(e[i].name,query))
						{
							immedia = e[i].line-count-4;
							break;
						}
					}
					ans = ans|((((unsigned long)immedia)>>2)&0xFFFF);
				}
			}
			else if(!strcmp(operations,"jal"))
			{
				//格式 jal adr，要求这里的adr为标号
				 fscanf(fp1,"%s",query);//直接读标号或者转移地址 
				if((query[0]>='0'&&query[0]<='9')||query[0]=='-')//直接显示跳转地址！
				{
					if(query[0]=='-')
					query[0]='0',flag = -1;
					for (int i=0;i<strlen(query);i++)
					{
						immedia = immedia*10+query[i]-'0';
					}
					immedia *=flag;
					ans = (3<<26)|((immedia>>1)&0x3FFFFFF);
					flag = 1;
			    }
				else//标号 
				{
					immedia =0;
					for (int i=0;i<total;i++)
					{
						if(!strcmp(e[i].name,query))
						{
							immedia = e[i].line;
							break;
						}
					}
					ans = 0x0C000000|((unsigned long) immedia>>2);
				}
			}
			else if(!strcmp(operations,"addi"))
			{
				//addi指令，格式 addi rt,rs,dat
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (8<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				ans = ans|(((unsigned long)immedia)&0xFFFF);
			}
			else if(!strcmp(operations,"slti"))
			{
				//slti指令，格式 slti rt,rs,dat
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (10<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				ans = ans|(((unsigned long)immedia)&0xFFFF);
			}
			else if(!strcmp(operations,"sltu"))
			{
				//格式：sltu rd,rs,rt
				//功能：小于 
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(43&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if(!strcmp(operations,"stliu"))
			{
				//格式：sltiu rt, rs, dat 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
			    solveReg(1);
				ans = (11<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				ans = ans|(((unsigned long)immedia)&0xFFFF);
			}
			else if(!strcmp(operations,"and"))
			{
				//格式：and rd ,rs, rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(36&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if(!strcmp(operations,"or"))
			{
				//格式：or rd, rs, rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0>>26)|(37&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11); 
			}
			else if(!strcmp(operations,"xor"))
			{
				//格式：xor rd,rs,rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(38&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11); 
			}
			else if(!strcmp(operations,"andi"))
			{
				//格式:andi $s1, $s2, 1234 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (12<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				ans = ans|(((unsigned long)immedia)&0xFFFF);
			}
			else if(!strcmp(operations,"ori"))
			{
				//格式：ori rt,rs,dot
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (13<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				ans = ans|(((unsigned long)immedia)&0xFFFF); 
			}
			else if(!strcmp(operations,"xori"))
			{
				//格式xori rt,rs,dot 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (14<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				ans = ans|(((unsigned long)immedia)&0xFFFF);
			}
			else if(!strcmp(operations,"nor"))
			{
				//格式:nor rd,rs,rt
				 for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(39&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if (!strcmp(operations,"syscall"))
			{
				ans = (0<<26)|(12&63);
			} 
			else if(!strcmp(operations,"sllv"))
			{
				//格式： slv rd rs,rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(4&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11); 
			}
			else if(!strcmp(operations,"srlv"))
			{
				//格式：srl rd,rs,sa
				 for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(6&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11);
			}
			else if(!strcmp(operations,"srav"))
			{
				//格式： srav rd,rs,rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				ans = (0<<26)|(7&63)|(regg[1]<<21)|(regg[2]<<16)|(regg[0]<<11); 
			}
			else {
				printf("该指令错误或者还在开发中！\n");
			}
			fwrite(&ans,4,1,fp2);
			fprintf(fp3,"%x\n",ans);
			count+=4;
			//printf("%s\n",operations);
	 } 
	 fclose(fp1);
	 fclose(fp2);
	 fclose(fp3);
	// printf("转化完成！\n");
}

void disassemble()//机器码转化成汇编程序 
{
//	printf("yes\n");
	FILE *fp1=fopen("output.txt","r");
//	FILE *fp2=fopen("output","wb");
	FILE *fp3=fopen("assemble.txt","w");
	unsigned long query;
	unsigned long ope,rs,rd,rt,shamt,ofs,func;
	if(!fp1)
	{
		printf("打开文件失败！\n");
		return;
	}
	int count = 0;
	signed long immedia;
	char que[10005];
	while(fscanf(fp1,"%x",&query)!=EOF)
	{
		//printf("fs\n");
		//printf("%x\n",query);
		if(query>>26==0)//最高的6位操作码为000000，则说明是R型指令！ 
		{
			rs = (query>>21)&0x1F;//取6555中的第一个5代表的寄存器;
			rd = (query>>16)&0x1F;
			rt = (query>>11)&0x1F;
			shamt = 0;//汇编中没有处理sll,srl,所以shamt不会赋值！ 
			func = (query&0x3F);
			solvenum(rt,0);
			solvenum(rs,1);
			solvenum(rd,2);
			if (func == 32)
			strcpy(que,"add ");
            if (func == 34)
			strcpy(que,"sub ");
            if (func == 36)
			strcpy(que,"and ");
            if (func == 37)
			strcpy(que,"or ");
            if (func == 42)
			strcpy(que,"slt ");
            if (func == 39)
			strcpy(que,"nor ");
			strcat(que,Reg[0]);
			strcat(que,", ");
			strcat(que,Reg[1]);
			strcat(que,", ");
			strcat(que,Reg[2]);
			fprintf(fp3,"%s\n",que);
	//		printf("hehe\n");
		}
		else if(query>>26==3||query>>26==2)
		{
			if(query>>26==3)
		     strcpy(que,"jal");
		    else strcpy(que,"j");
		    fprintf(fp3,"%s ",que);
		    fprintf(fp3,"%d\n",query&0x3FFFFFF);
	//	    printf("xieixe\n");
		}
		else if(query>>26==35||query==43)
		{
			rs=rt=immedia=0;
			if(query>>26==35) strcpy(que,"lw ");
			else strcpy(que,"sw ");
			rs = (query>>21)&0x1F;//取6555中的第一个5代表的寄存器;
			rd = (query>>16)&0x1F;
			solvenum(rd,0);
			solvenum(rs,1);
			immedia = query&0xFFFF;//取最低的16位
			strcat(que,Reg[0]);
			strcat(que,", ");
			fprintf(fp3,"%s ",que);
			fprintf(fp3,"%d",immedia);
			strcpy(que,"(");
			strcat(que,Reg[1]);
			strcat(que,")\n");
			fputs(que,fp3);
	//		printf("zhizhi\n");
			
		}
		else if(query>>26==8||query>>26==13||query>>26==10||query>>26==4||query>>26==5)
		{
			unsigned long now = query>>26;
			if(now == 8) strcpy(que,"addi ");
			else if(now == 13) strcpy(que,"ori ");
			else if(now == 10) strcpy(que,"slti ");
			else if(now == 4) strcpy(que,"beq ");
			else if(now == 5) strcpy(que,"bne ");
			immedia = query&0xFFFF;//取最低的16位
			rs = (query>>21)&0x1F;//取6555中的第一个5代表的寄存器;
			rd = (query>>16)&0x1F;
			solvenum(rd,0);
			solvenum(rs,1);
			if(now == 8||now==13||now==10)
			{
				strcat(que,Reg[0]);
			    strcat(que,", ");
			    strcat(que,Reg[1]);
			    fprintf(fp3,"%s ",que);
			    fprintf(fp3,"%d\n",immedia);
			}
			else
			{
				strcat(que,Reg[1]);
			    strcat(que,", ");
			    strcat(que,Reg[0]);
			    fprintf(fp3,"%s ",que);
			    fprintf(fp3,"%d\n",immedia);
			}
	//		printf("meimei\n");
		}	
	}
	fclose(fp1);
	fclose(fp3);
	
}

int R[32] = {0};
char Re[32][15] = {"$zero", "$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3", "$t0", "$t1", "$t2", "$t3", "$t4", "$t5",
                 "$t6", "$t7", "$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7", "$t8", "$t9", "$k0", "$k1",
                 "$gp", "$sp", "$fp", "$ra"};

void showregisters()//展示寄存器 
{
	for (int i=0;i<32;i++)
	{
		printf("%s : %d ",Re[i],R[i]);
		if(i%8==7)
		printf("\n");
	}
}

void show_memory_as_data()//以数字方式展示内存 
{
	FILE *fp=fopen("output.txt","r");
	unsigned long query;
	unsigned long ope,rs,rd,rt,shamt,ofs,func;
	if(!fp)
	{
		printf("打开文件失败！\n");
		return;
	}
	while(fscanf(fp,"%x",&query)!=EOF)
	{
		printf("%x\n",query);
	}
	fclose(fp);
}

void show_memory_as_instruction()//以指令方式展示内存 
{
//	disassemble();
	FILE *fp=fopen("assemble.txt","r");
	if(!fp)
	{
		printf("打开文件失败！\n");
		return;
	}
	 char *OneLine = (char *)malloc(sizeof(char) * 100);
	while (!feof(fp)) {
        fgets(OneLine, 100, fp);
        puts(OneLine);
    }
    free(OneLine);
    fclose(fp);
}

void store_instruction()//存储指令 
{
	char *ins = (char *)malloc(sizeof(char) *100);
	gets(ins);
	FILE *fp=fopen("assemble.txt","a+");
	fputs(ins,fp);
	fclose(fp);
}

void run_steps(int x)//x=1表示运行一步，x=0表示运行全部程序 
{
	disassemble();
	FILE *fp1=fopen("assemble.txt","r");
	if(!fp1)
	{
		printf("打开文件失败！\n");
		return;
	}
	int ccnt=0;
	int ppnt = 0;
	unsigned long immedia;
	while(fscanf(fp1,"%s",operations)!=EOF)
	{
		ppnt++; 
		char ch;
		do
		{
			if(fscanf(fp1,"%c",&ch)==EOF) break;//只关心行号，行号后面的语句都不管 
		}while(ch!='\n');
	} 
	if(ppnt==countnow)
	{
		countnow = -1;
	}
	fseek(fp1,0,SEEK_SET);
	if(countnow==-1) 
	{
	printf("内存中全部指令已经执行，是否重新从头开始执行指令？\n0重新开始，1退出\n");
	char c = getchar();
	if(c=='0') countnow = 0,getchar();
	else {
		getchar();
		return;
	}}
		while(fscanf(fp1,"%s",operations)!=EOF)//读入第一行的第一个字符串 
	{
		if(operations[strlen(operations)-1]==':')
		    fscanf(fp1,"%s",operations);//如果是标号，那么第二个字符串才是 
		    if(ccnt<countnow)
		    {
		    	do
				{
					if(fscanf(fp1,"%c",&ch)==EOF) break;//只关心行号，行号后面的语句都不管 
				}while(ch!='\n');
		    	ccnt++;
		    	ppnt = -1;
		    	continue;
			}
		    if(!strcmp(operations,"add"))//如果是加法  
		    {
		    	//如果是add，我们规定格式应该为：add $s1, $s2, $s3 
		    	//也就是寄存器间必须有空格！ 
		    	for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    	//	printf("当前寄存器是%s ",reg);
		    		solveReg(i);
		    	//	printf("当前寄存器编号是%x\n",regg[i]);
				}	
				R[regg[0]]=R[regg[1]]+R[regg[2]]; 
			}
			else if(!strcmp(operations,"sub"))//如果是加法  
		    {
		    	//如果是sub，我们规定格式应该为：sub $s1, $s2, $s3 
		    	//也就是寄存器间必须有空格！ 
		    	for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				R[regg[0]]=R[regg[1]]-R[regg[2]]; 
			}
			else if(!strcmp(operations,"slt"))//如果slt  
		    {
		    	//如果是slt，我们规定格式应该为：slt $s1, $s2, $s3 
		    	//也就是寄存器间必须有空格！ 
		    	for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				R[regg[0]]=(R[regg[1]]<R[regg[2]])?1:0; 
			}
			else if(!strcmp(operations,"beq"))//如果是beq 
			{
			//格式为： beq $s1, $s2, 1234 or beq $s1, $s2, RR
			//格式要求：寄存器间带空格，同时最后一项，如果是标号则开头不能带数字！ 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = 0x10000000|(regg[1]<<21)|(regg[0]<<16); 
				fscanf(fp1,"%s",query);
				//printf("query = %s\n",query);
				if((query[0]>='0'&&query[0]<='9')||query[0]=='-')//直接显示跳转地址！
				{
					immedia =0;
					if(query[0]=='-')
					query[0]='0',flag = -1;
					for (int i=0;i<strlen(query);i++)
					{
						immedia = immedia*10+query[i]-'0';
					}
					immedia =immedia *flag;
					ans = ans|(((unsigned long)immedia)<<16>>16);
					flag = 1;
			    }
				else//标号 
				{
					immedia =0;
					for (int i=0;i<total;i++)
					{
						if(!strcmp(e[i].name,query))
						{
							immedia = e[i].line-count-4;//目标-PC-4 
							break;
						}
					}
			//		printf("immedia = %d\n",immedia);
					ans = ans|((((unsigned long)immedia>>2))&0xFFFF);
				}	
			}
			else if(!strcmp(operations,"bne"))
			{
				//格式为： bne $s1, $s2, 1234 or bne $s1, $s2, RR
			    //格式要求：寄存器间带空格，同时最后一项，如果是标号则开头不能带数字！ 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (5<<26)|(regg[1]<<21)|(regg[0]<<16); 
				fscanf(fp1,"%s",query);
				if((query[0]>='0'&&query[0]<='9')||(query[0]=='-'))//直接显示跳转地址！
				{
					if(query[0]=='-')
					query[0]='0',flag = -1;
					for (int i=0;i<strlen(query);i++)
					{
						immedia = immedia*10+query[i]-'0';
					}
					immedia *=flag;
					ans = ans|(((unsigned long)immedia)<<16>>16);
					flag = 1;
			    }
				else//标号 
				{
					immedia =0;
					for (int i=0;i<total;i++)
					{
						if(!strcmp(e[i].name,query))
						{
							immedia = e[i].line-count-4;
							break;
						}
					}
					ans = ans|((((unsigned long)immedia)>>2)&0xFFFF);
				}
			}
			else if(!strcmp(operations,"addi"))
			{
				//addi指令，格式 addi rt,rs,dat
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (8<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				R[regg[0]]=R[regg[1]]+immedia; 
			}
			else if(!strcmp(operations,"and"))
			{
				//格式：and rd ,rs, rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				R[regg[0]]=R[regg[1]]&R[regg[2]]; 
			}
			else if(!strcmp(operations,"or"))
			{
				//格式：or rd, rs, rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				R[regg[0]]=R[regg[1]]|R[regg[2]]; 
			}
			else if(!strcmp(operations,"xor"))
			{
				//格式：xor rd,rs,rt
				for (int i=0;i<=2;i++)
		    	{
		    		fscanf(fp1,"%s",reg);
		    		if(reg[strlen(reg)-1]==',')
		    		reg[strlen(reg)-1]='\0';
		    		solveReg(i);
				}	
				R[regg[0]]=R[regg[1]]^R[regg[2]];
			}
			else if(!strcmp(operations,"andi"))
			{
				//格式:andi $s1, $s2, 1234 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (12<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				R[regg[0]]=R[regg[1]]&immedia; 
			}
			else if(!strcmp(operations,"ori"))
			{
				//格式：ori rt,rs,dot
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (13<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				R[regg[0]]=R[regg[1]]|immedia; 
			}
			else if(!strcmp(operations,"xori"))
			{
				//格式xori rt,rs,dot 
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(0);
				fscanf(fp1,"%s",reg);
				reg[strlen(reg)-1]='\0';
				solveReg(1);
				ans = (14<<26)|(regg[1]<<21)|(regg[0]<<16); //读取两个寄存器 
				fscanf(fp1,"%s",query);
				immedia =0;
				for (int i=0;i<strlen(query);i++)
				{
					immedia = immedia*10+query[i]-'0';
				}
				R[regg[0]]=R[regg[1]]^immedia; 
			}
			else if(!strcmp(operations,"sw"))
			{
				//格式sw   $t0,2($st1) 
				fscanf(fp1,"%s",query);
				int cnt1 = 0,now1 = 0;
				int cccnt = 0;
				while(query[cnt1]!=','){
					reg[cccnt] = query[cnt1];
					cnt1++;
					cccnt++;
				}
				reg[cccnt] = '\0';
				solveReg(1);
				cccnt = 0;
				while(query[cnt1]!='('){
					now1 = now1*10 + query[cnt1]-'0';
					cnt1++;
				}
				cnt1++;
				while(query[cnt1]!=')'){
					reg[cccnt] = query[cnt1];
					cnt1++;
					cccnt++;
				}
				reg[cccnt] = '\0';
				solveReg(0);
				int anss;
				int offset = now1 + regg[0];
				FILE *fpM=fopen("Memory.txt","r");
				FILE *fpM2 = fopen("Memory2.txt","w");
				cccnt = 0;
				while(!feof(fpM)){
					fscanf(fpM,"%d",&anss);
					if(cccnt!=offset){
						fprintf(fpM2,"%d\n",anss);
					}
					else
					fprintf(fpM2,"%d\n",R[regg[1]]);
					cccnt++;
				} 
				fclose(fpM);
				fclose(fpM2);
				fpM=fopen("Memory.txt","w");
				fpM2 = fopen("Memory2.txt","r");
				cccnt = 0;
				while(!feof(fpM2)){
					fscanf(fpM2,"%d",&anss);
					fprintf(fpM,"%d\n",anss);
				} 
				fclose(fpM);
				fclose(fpM2);
			} 
			else if(!strcmp(operations,"lw"))
			{
				//格式lw   $t0,2($st1) 
				fscanf(fp1,"%s",query);
				int cnt1 = 0,now1 = 0;
				int cccnt = 0;
				while(query[cnt1]!=','){
					reg[cccnt] = query[cnt1];
					cnt1++;
					cccnt++;
				}
				reg[cccnt] = '\0';
				solveReg(1);
				cccnt = 0;
				while(query[cnt1]!='('){
					now1 = now1*10 + query[cnt1]-'0';
					cnt1++;
				}
				cnt1++;
				while(query[cnt1]!=')'){
					reg[cccnt] = query[cnt1];
					cnt1++;
					cccnt++;
				}
				reg[cccnt] = '\0';
				solveReg(0);
				int offset = now1 + regg[0];
				cccnt=0;
				int anss = 0;
				FILE *fpM=fopen("Memory.txt","r");
				while(cccnt<offset){
					fscanf(fpM,"%d",&anss);
					cccnt++;
				} 
				fscanf(fpM,"%d",&anss);
				fclose(fpM);
				R[regg[1]] = anss;
			} 
			else {
				printf("该指令错误或者还在开发中！\n");
			}
			ppnt=1;
			if(x==1) return;
			count+=4;
			//printf("%s\n",operations);
	 } 
}
void show_help_menu()
{
	printf("                            Welcome to MIPS\n");
	printf("---------------------------------------------------------------\n");
	printf("--  command                    function                      --\n");
	printf("--     r              show values of all registers           --\n");
	printf("--     d                view memory in data mode             --\n");
	printf("--     u            view memory in instruction mode          --\n");
	printf("--     a         write assembly instructions to memory       --\n");
	printf("--     t          execute single instruction in memory       --\n");
	printf("--     p             execute instructions in memory          --\n");
	printf("--     s                assemble the instructions            --\n");
	printf("--     q                         quit                        --\n");
	printf("--     h                   show the help menu                --\n");
	printf("---------------------------------------------------------------\n");
}
int main()
{
	printf("                            Welcome to MIPS\n");
	printf("---------------------------------------------------------------\n");
	printf("--  command                    function                      --\n");
	printf("--     r              show values of all registers           --\n");
	printf("--     d                view memory in data mode             --\n");
	printf("--     u            view memory in instruction mode          --\n");
	printf("--     a         write assembly instructions to memory       --\n");
	printf("--     t          execute single instruction in memory       --\n");
	printf("--     p             execute instructions in memory          --\n");
	printf("--     s                assemble the instructions            --\n");
	printf("--     q                         quit                        --\n");
	printf("--     h                   show the help menu                --\n");
	printf("---------------------------------------------------------------\n");
    while (1) {
    	printf("->");
        char choose;
        scanf("%c",&choose);
        if (choose == 'r') showregisters();
        else if (choose == 'd') show_memory_as_data();
        else if (choose == 'u') show_memory_as_instruction();
        else if (choose == 'a') store_instruction();
        else if (choose == 't') {run_steps(1);countnow++;}
        else if (choose == 'p') {run_steps(0);countnow = -1;}
        else if (choose == 's') assemble();
        else if (choose == 'h') show_help_menu();
        else if (choose == 'q') break;
        else printf("wrong command!\n");
        getchar();
    }
	
	 return 0;
} 

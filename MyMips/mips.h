#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <graphics.h>
#include <conio.h>
#include <string>
#include <vector>
#include <atlstr.h>
#include <iostream>
#include "mips.h"
#define MEMSIZE 2048
#define REGSIZE 32
#define swap32Big2Little(x)    (((x)&(0x0000ffff)) << 32 |  ( (x)&(0xffff0000) >> 32))
using namespace std;

typedef unsigned char byte;  //8'bit
typedef unsigned short int word;  // 16'bit
typedef unsigned long int dword;  //32'bit

bool assembler(char* inst);   //指令转机器码
void fetch(char* inst, char* s);//截取对应部分字符串
void delete_label(char* inst);//截取非@部分
int str2reg(char* op);       //字符串转寄存器
void UppToLow(string str);     //小写转大写
void DemToBin(dword machine);  //机器码转二进制
void Createlabel();            //创建符号表
void ShowReg();              //显示内存
int GetType(int num);      //判断指令格式
void GetReg(int n, char* op);  //机器码转寄存器
void GetRInst(char* op, int func);//机器码转R指令操作 
void GetIInst(char* op, int n);//机器码转I指令操作 
void ExecuteByStep();           //单步执行

void getInput();               //一行一行输入指令
void outIns();              //在指定位置输出指令
void initGraph();           //进行图片准备
void initReg();
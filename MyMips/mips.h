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

bool assembler(char* inst);   //ָ��ת������
void fetch(char* inst, char* s);//��ȡ��Ӧ�����ַ���
void delete_label(char* inst);//��ȡ��@����
int str2reg(char* op);       //�ַ���ת�Ĵ���
void UppToLow(string str);     //Сдת��д
void DemToBin(dword machine);  //������ת������
void Createlabel();            //�������ű�
void ShowReg();              //��ʾ�ڴ�
int GetType(int num);      //�ж�ָ���ʽ
void GetReg(int n, char* op);  //������ת�Ĵ���
void GetRInst(char* op, int func);//������תRָ����� 
void GetIInst(char* op, int n);//������תIָ����� 
void ExecuteByStep();           //����ִ��

void getInput();               //һ��һ������ָ��
void outIns();              //��ָ��λ�����ָ��
void initGraph();           //����ͼƬ׼��
void initReg();
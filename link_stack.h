
#ifndef _LINK_STACK_H
#define _LINK_STACK_H
#define _CRT_SECURE_NO_WARNINGS 


#include "main.h"
#define Elemtype int    //


typedef struct SNode
{
	Elemtype data;
	struct SNode   *next;
}SNode, *Linkstack;

int StackInit(Linkstack*pstack);
int StackEmpty(Linkstack stack);
int StackCreat(Linkstack stack,int num);
int StackLength(Linkstack stack);
int StackTop(Linkstack stack,Elemtype*elem);
int StackPush(Linkstack stack, Elemtype elem);
int StackPop(Linkstack stack, Elemtype*elem);
int StackShow(Linkstack stack);


#endif
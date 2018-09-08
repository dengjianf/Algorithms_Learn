#ifndef _LINK_LIST_H
#define _LINK_LIST_H

#define _CRT_SECURE_NO_WARNINGS 
#include "main.h"
#define Elemtype int    //


typedef struct LNode
{
	Elemtype data;
	struct LNode   *next;
}LNode, *Linklist;

typedef enum
{
	AT_HEAD = 0,
	AT_TAIL = 1
}Mode;
/*
初始化线性链表，带头节点的空单链表
head-->[  |  ]-->NULL
成功返回0，失败返回1
*/
int List_Init(Linklist*phead);
/*
链表判空，空返回1，否则返回0
*/
int List_Empty(Linklist head);

int Create_List(Linklist head, int num, Mode mode);

int ListLenth(Linklist head);

int ListInsert(Linklist head,int loc, Elemtype elem);

int ListDelete(Linklist head, int loc,Elemtype*elem);

int ListLocate(Linklist head,Elemtype elem);

int ListVisit(Linklist head, int loc,Elemtype*elem);

int ListShow(Linklist head);

int ListDestroy(Linklist*phead);

//int ListRead(Linklist*phead, char*filename);

//int ListSave(Linklist head,char*filename);
////////////////////////////////////////////////////////////
int IS_ParraMode(int mode);
#endif


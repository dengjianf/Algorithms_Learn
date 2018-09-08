#ifndef _LINK_QUEUE_H
#define _LINK_QUEUE_H
#define _CRT_SECURE_NO_WARNINGS 
#include "main.h"

#define Elemtype int

typedef struct QNode
{
	Elemtype data;
	struct QNode *next;
	
}QNode;
typedef struct
{
	QNode*head;
	QNode*tail;
}LinkQueue;

int QueueInit(LinkQueue*p_queue);
int EnQueue(LinkQueue *queue, Elemtype elem);
int QueueCreat(LinkQueue *queue, int num);
int QueueShow(LinkQueue queue);
int DeQueue(LinkQueue *queue, Elemtype *elem);
int EnQueue(LinkQueue *queue, Elemtype elem);
int QueueEmpty(LinkQueue queue);
int QueueLength(LinkQueue queue);
int QueueHead(LinkQueue queue, Elemtype *elem);
int QueueDestroy(LinkQueue *queue);

#endif

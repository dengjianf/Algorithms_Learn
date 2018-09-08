#include"link_queue.h"

int QueueInit(LinkQueue*queue)
{
	QNode*p = (QNode*)malloc(sizeof(QNode));
	if (p == NULL) return -1;
	p->next = NULL;
	(*queue).head = p;              //要注意head指针并不是直接指向第一个node！！
	(*queue).tail = p;
	return 0;
}
int EnQueue(LinkQueue *queue, Elemtype elem)
{
	QNode*p= (QNode*)malloc(sizeof(QNode));
	if (p == NULL) return -1;
	p->data = elem;

	p->next = NULL;
	( (*queue).tail )->next = p;
	(*queue).tail = p;	
	return 0;
}
int DeQueue(LinkQueue *queue, Elemtype *elem)
{
	QNode *Del_Node=NULL;
	if (QueueEmpty(*queue))  return -1;
	Del_Node = (*queue).head->next;
	*elem = Del_Node->data;
	((*queue).head)->next = Del_Node->next;
	free(Del_Node);
	return 0;
}
int QueueCreat(LinkQueue *queue, int num)
{
	int i;
	Elemtype elem;
	for (i = 0; i < num; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &elem);
		EnQueue(queue, elem);
	}
	return 0;
}
int QueueShow(LinkQueue queue)
{
	QNode*p = queue.head;
	Elemtype elem;
	
	while (p!=queue.tail)
	{
		p = p->next;
		elem = p->data;
		printf("%d", elem);
	}
	printf("\n");
	return 0;
}
int QueueEmpty(LinkQueue queue)
{
	if (queue.head == queue.tail) return 1;
		return 0;
}
int QueueLength(LinkQueue queue)
{
	int count = 0;
	QNode*p=queue.head;
	while (p != queue.tail)
	{
		count++;
		p = p->next;
	}
	return count;
}
int QueueHead(LinkQueue queue, Elemtype *elem)
{
	QNode*p = queue.head;
	if (QueueEmpty(queue)) return -1;
	*elem = (p->next)->data;
	return 0;
}
int QueueDestroy(LinkQueue *queue)
{
	QNode *p = (*queue).head->next,*q= NULL;
	while (p != NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
	free((*queue).head);
	(*queue).head = NULL;
	(*queue).tail = NULL;
	return 0;
}




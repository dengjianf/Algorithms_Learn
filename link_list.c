#include"link_list.h"

int List_Init(Linklist*phead)
{
	*phead = (LNode*)malloc(sizeof(LNode));
	if (*phead == 0) return -1;
	(*phead)->next = NULL;
	return 0;
}

int List_Empty(Linklist head)
{
	if (head->next == NULL)
		return 1;
	return 0;
}

int Create_List(Linklist head, int num, Mode mode)
{
	if (IS_ParraMode(mode)) return -1;

	if (mode == AT_TAIL)
	{
		int i;
		LNode*p = head;
		for (i = 0; i < num; i++)
		{
			LNode*q = (LNode*)malloc(sizeof(LNode));
			if (q == NULL) return -1;

			Elemtype elem;
		  
			if (q == NULL)
				return -1;
			printf("请输入第%d个元素\n", i + 1);
			scanf("%d", &elem);

			q->data = elem;
			p->next = q;
			q->next = NULL;
			p = q;
		}
	}
	else
	{
		int i;
		LNode*p = NULL;
		for (i = num; i >= 1; i--)
		{
			Elemtype elem;
			printf("请输入第%d个元素\n",i);
			scanf("%d", &elem);
			
			p = (LNode*)malloc(sizeof(LNode));
			if (p == NULL) return -1;

			p->data = elem;
			p->next = head->next;
			head->next = p;
			
		}
	}
	return 0;
}

int ListInsert(Linklist head, int loc,Elemtype elem)
{
	int i;
	LNode*p = head;
	for (i=0;i<loc-1; i++)
	{
		if (p->next == NULL) return -1;
		p = p->next;
	}

	LNode*q = (LNode*)malloc(sizeof(LNode));
	if (q == NULL) return -1;

	q->data = elem;

	q->next = p->next;
	p->next = q;
	return 0;	
}

int ListDelete(Linklist head,int loc, Elemtype* elem)
{
	int i;
	LNode *p = head,*q=NULL;
	for (i = 0; i<loc; i++)
	{
		if (p->next == NULL) return -1;
		if (i == loc-1)
		{
			q = p;//			 
		}
		p = p->next;
	}
	*elem = p->data;
	q->next = p->next;
	free(p);
}

int ListLenth(Linklist head)
{
	LNode*p = head;
	int count = 0;
	while (p->next != NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}

int ListShow(Linklist head)
{
	LNode*p = head->next;
	Elemtype elem;
	while (p != NULL)
	{		
		elem = p->data;
		printf("%d\n", elem);
		p = p->next;		
	}
	printf("\n");
}

int ListLocate(Linklist head, Elemtype elem)
{
	LNode*p = head;
	int loc = 0;
	
	while (p->next != NULL)
	{
		p = p->next;
		loc++;
		if (p->data == elem)
			return loc;
	}
	return -1;
}

int ListVisit(Linklist head, int loc, Elemtype*elem)
{
	LNode*p = head;
	int i;
	for (i = 0; i < loc; i++)
	{
		if (p->next == NULL) return -1;
		p = p->next;
		*elem = p->data;
	}

}

int ListDestroy(Linklist*phead)
{
	LNode*p = *phead, *q = NULL;
	while (NULL != p)
	{
		q = p;
		p = p->next;
		free(q);
	}
	*phead = NULL;
}
//
//int ListSave(Linklist head, char*filename)
//{
//	FILE *fp;
//	LNode*p=head->next;
//	
//
//	while (p != NULL)
//	{
//		Elemtype elem = p->data;
//
//		if ((fp = fopen(filename, "ab+")) == NULL)//打开
//			return -1;
//
//		printf("xxxxx");
//		fwrite(&elem, sizeof(Elemtype), 1, fp);
//
//		fclose(fp);
//		fp = NULL;
//
//		p = p->next;
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//////////////////////////////////////////////////////
int IS_ParraMode(int mode)
{
	if (mode == AT_HEAD |
		AT_TAIL)
		return 0;
	return 1;
}
//
//int IS_ParraI(int i)
//{
//
//}
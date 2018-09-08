#include "link_stack.h"


int StackInit(Linkstack*pstack)
{
	(*pstack) = (Linkstack)malloc(sizeof(SNode));
	if (*pstack == NULL) return -1;
	(*pstack)->next = NULL;
}
int StackEmpty(Linkstack stack)
{
	if (stack->next == NULL)
		return 1;
	return 0;
}
int StackCreat(Linkstack stack,int num)
{
	int i;
	Elemtype elem;
	for (i = 0; i < num; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &elem);
		if (StackPush(stack, elem) == -1)
			return -1;
	}
	printf("\n");
	return 0;
}
int StackLength(Linkstack stack)
{
	SNode*p = stack;
	int count = 0;
	while (p->next != NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}
int StackTop(Linkstack stack, Elemtype*elem)
{
	if (StackEmpty(stack)) return -1;
	*elem = stack->next->data;
	return 0;
}
int StackPush(Linkstack stack, Elemtype elem)
{
	SNode*p= (Linkstack)malloc(sizeof(SNode));
	if (p == NULL) return -1;
	p->data = elem;
	p->next = stack->next;
	stack->next = p;

}
int StackPop(Linkstack stack, Elemtype*elem)
{
	SNode*p = NULL;
	if (StackEmpty(stack))  return -1;
	p = stack->next;
	*elem = stack->data;
	stack->next = p->next;
	free(p);
	return 0;
	
}
int StackShow(Linkstack stack)
{
	SNode*p = stack;
	Elemtype elem;
	while (p->next != NULL)
	{
		p = p->next;
		elem = p->data;
		printf("%d\n", elem);
		
	}
	printf("\n");
}
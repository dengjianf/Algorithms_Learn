#include "main.h"
#define Debug_Insert_Sort 0 //∆Ù∂Ø≤Â»Î≈≈–Ú—› æ
#define Debug_Select_Sort 0
#define Debug_Merge_Sort  0
#define Debug_Quick_Sort 0
#define Debug_Link_Queue 0
#define Debug_HashTable 1

int main()
{
#if Debug_Insert_Sort
	int i = 0;
	int Array[5] = {9,5,3,7,1};
	InsertSortUp(Array,5);
	for (i = 0; i < 5; i++)
	{
		printf("%d", Array[i]);
	}
#endif
#if Debug_Select_Sort
	int i = 0;
	int Array[5] = { 9,5,3,7,1 };
	SelectSortUp(Array, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d", Array[i]);
	}
#endif
#if Debug_Merge_Sort
	int i = 0;
	int Array[5] = { 9,5,3,7,1 };
	SelectSortUp(Array, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d", Array[i]);
	}
#endif
#if Debug_Quick_Sort
	int i = 0;
	int Array[5] = { 9,5,3,7,1 };
	Quick_Sort(Array,0,4);
	for (i = 0; i < 5; i++)
	{
		printf("%d", Array[i]);
	}
#endif
#if Debug_Link_Queue
	LinkQueue Queue;
	int del_node = 0;
	int head_node = 0;
	int length=0;
	QueueInit(&Queue);
	QueueCreat(&Queue,10);
	QueueShow(Queue);
	EnQueue(&Queue,3);
	QueueShow(Queue);
	DeQueue(&Queue,&del_node);
	printf("del_Node:%d\n", del_node);
	QueueShow(Queue);
	QueueHead(Queue,&head_node);
	printf("head_node:%d\n", head_node);
	length = QueueLength(Queue);
	printf("length:%d\n", length);
	QueueDestroy(&Queue);
#endif
#if Debug_HashTable
	HashTable hashTable;
	HashTableInit(5,&hashTable);
	InsertKey(&hashTable, 11);
	ShowHashTable(hashTable);

#endif
	system("pause");
}
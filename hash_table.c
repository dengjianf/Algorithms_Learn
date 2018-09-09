#include "hash_table.h"
#define MinTableSize 3

int HashTableInit(int tableSize, LinkHashTable *phashTable)
{
	if (tableSize < MinTableSize)
		return -1;
	phashTable = (LinkHashTable*)malloc(sizeof(struct LinkHashTable));//
	if (phashTable == NULL)
		return -1;

	phashTable->tableSize = tableSize;
	phashTable->theList = (Linklist*)malloc(sizeof(Linklist)*phashTable->tableSize);
	if (phashTable->theList == NULL)
		return -1;

	for (int i = 0; i < tableSize; i++)
	{
		if (List_Init(&(phashTable->theList[i])))//初始化每一个头指针，防止悬空
			return -1;
	}
	return 0;
}
int ShowHashTable(LinkHashTable hashTable)
{
	printf("Size of HashTable:%d\n", hashTable.tableSize);

	for (int i = 0; i < hashTable.tableSize; i++)
	{
		LNode *pNode_tmp = ((hashTable.theList[i]))->next;
		printf("hashTable[%d]: ",i);
		while (pNode_tmp != NULL)
		{
			printf("%d  ",pNode_tmp->data);
			pNode_tmp = pNode_tmp->next;
		}
		printf("\n");
	}
}
 
void InsertKey(LinkHashTable _hashTable, int key)
{
	LNode* pNode_loc = (LNode*)malloc(sizeof(LNode)) ;
	printf("size:%d\n", _hashTable.tableSize);
	printf("loc:%d\n", ModInt_HashFun(key, _hashTable.tableSize));
	//pNode_loc = (hashTable.theList[ModInt_HashFun(key, hashTable.tableSize)]);
	LNode* pNode_tmp = (LNode*)malloc(sizeof(struct LNode));
	LNode* pNode_new = (LNode*)malloc(sizeof(struct LNode));
	  
	pNode_new->data = key;
	pNode_new->next = NULL;

	pNode_tmp = pNode_loc->next;
	pNode_loc->next = pNode_new;
	pNode_new->next = pNode_tmp;
}

inline static int ModInt_HashFun(int key,int tableSize)//
{
	return  key%tableSize;
}

inline int DRCChr_HashFun(char * key, int tableSize)
{
	return 0;
}


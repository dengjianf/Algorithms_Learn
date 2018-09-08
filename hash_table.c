#include "hash_table.h"
#define MinTableSize 3



int HashTableInit(int tableSize, HashTable * phashTable)
{
	if (tableSize < MinTableSize)
		return -1;

	HashTable* hash_table = (HashTable*)malloc(sizeof(struct HashTable));//
	if (hash_table == NULL)
		return -1;

	hash_table->theList = (Linklist*)malloc(sizeof(Linklist)*tableSize);
	if (hash_table->theList == NULL)
		return -1;

	for (int i = 0; i < tableSize; i++)
	{
		if (List_Init(hash_table->theList))//初始化每一个头指针，防止悬空
			return -1;
	}

	phashTable = hash_table;
	return 0;
}
int ShowHashTable(HashTable hashTable)
{
	printf("Size of HashTable:%d\n", hashTable.tableSize);

	for (int i = 0; i < hashTable.tableSize; i++)
	{
		LNode* pNode_tmp = hashTable.theList[i].next;
		printf("hashTable[%d]: ",i);
		while (pNode_tmp != NULL)
		{
			printf("%d  ",pNode_tmp->data);
			pNode_tmp = pNode_tmp->next;
		}
		printf("\n");
	}
}

void InsertKey(HashTable* p_hashTable,int key)
{
	LNode* pNode_tmp = p_hashTable->theList[ModInt_Hash(key,p_hashTable->tableSize)].next;//你懂的！
	LNode Node_new;Node_new.next = NULL;

	while (pNode_tmp !=NULL)
	{
		pNode_tmp=pNode_tmp->next;
    }
	Node_new.data = key;
    
	*(pNode_tmp->next) = Node_new;
}



inline static int ModInt_Hash(int key,int tableSize)//
{
	return  key % tableSize;
}


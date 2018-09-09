#pragma once
#include "main.h"
#define Debug 0
/*
采用 散列-分离链接法 构建hash链接表
*/
typedef struct LinkHashTable
{
	int tableSize;
    struct LNode **theList;//指向 指向链表节点的指针 的指针
}LinkHashTable;

int HashTableInit(int tableSize, LinkHashTable* phashTable);
void InsertKey(LinkHashTable hashTable, int key);
int ShowHashTable(LinkHashTable hashTable);
inline static int ModInt_HashFun(int key, int tableSize);
inline static int DRCChr_HashFun(char *key,int tableSize);




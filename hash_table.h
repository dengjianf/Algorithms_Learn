#pragma once
#include "main.h"
#define Debug 0
/*
���� ɢ��-�������ӷ� ����hash���ӱ�
*/
typedef struct LinkHashTable
{
	int tableSize;
    struct LNode **theList;//ָ�� ָ������ڵ��ָ�� ��ָ��
}LinkHashTable;

int HashTableInit(int tableSize, LinkHashTable* phashTable);
void InsertKey(LinkHashTable hashTable, int key);
int ShowHashTable(LinkHashTable hashTable);
inline static int ModInt_HashFun(int key, int tableSize);
inline static int DRCChr_HashFun(char *key,int tableSize);




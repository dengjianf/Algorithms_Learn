#pragma once
#include "main.h"

/*
���� ɢ��-�������ӷ� ����hash���ӱ�
*/

typedef struct HashTable
{
	int tableSize;
    struct Linklist *theList;
}HashTable;

int HashTableInit(int tableSize, HashTable* phashTable);
void InsertKey(HashTable* p_hashTable, int key);
int ShowHashTable(HashTable hashTable);
inline static int ModInt_Hash(int key, int tableSize);
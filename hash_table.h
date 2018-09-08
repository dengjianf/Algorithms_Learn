#pragma once
#include "main.h"

/*
采用 散列-分离链接法 构建hash链接表
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
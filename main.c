#include "main.h"
#define Debug_Insert_Sort 0 //∆Ù∂Ø≤Â»Î≈≈–Ú—› æ
#define Debug_Select_Sort 0
#define Debug_Merge_Sort 1
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
	system("pause");
}
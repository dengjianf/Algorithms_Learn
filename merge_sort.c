#include "merge_sort.h"
int Merge_Sort(int * array, int p, int r)
{
	if(p>r)
	return 0;

	int q=(p + r) / 2;//自动取整
	Merge_Sort(array,p,q);       //分治！
	Merge_Sort(array, q + 1, r);
	Merge(array, p, q, r);
}
static int Merge(int *array, int p, int q, int r)
{

	return 0;
}

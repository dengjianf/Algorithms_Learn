#include "main.h"

 void Quick_Sort(int *array, int left, int right)
{
	if (left >= right)
		return;

	int mid = Partion(array, left, right);
	Quick_Sort(array, left, mid-1);
	Quick_Sort(array, mid+1,right);
}

int Partion(int *array,int left,int right)
{
	int pivot = array[left];// 算法值得改进的地方
	int pivot_index = left;
	int i = left, j = right;
	
	while (i!=j)
	{
		for ( j = right; j > pivot_index; j--)
		{
			if (array[j] < pivot)
			{
				exchange(&array[j], &pivot);
				pivot_index = j;
				break;
			}
		}
		for ( i = left; i < pivot_index; i++)
		{
			if (array[i] > pivot)
			{
				exchange(&array[i], &pivot);
				pivot_index = i;
				break;
			}
		}
	}
	return pivot_index;
}

static inline void exchange(int *num1,int *num2)
{
	if (*num1 != *num2)
	{
		int tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
	 }
}


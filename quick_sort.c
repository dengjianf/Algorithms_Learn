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
	int pivot_index = left;//算法值得改进的地方！（随机抓取一个？）
	int i = left, j = right;
	
	while (i!=j)
	{
		for ( j = right; j > pivot_index; j--)
		{
			if (array[j] < array[pivot_index])
			{
//				exchange(&array[j], &pivot);
				int tmp = array[j];
				array[j] = array[pivot_index];
				array[pivot_index] = tmp;

				pivot_index = j;
				break;
			}
		}
		for ( i = left; i < pivot_index; i++)
		{
			if (array[i] > array[pivot_index])
			{
				//exchange(&array[i], &pivot);
				int tmp = array[i];
				array[i] = array[pivot_index];
				array[pivot_index] = tmp;

				pivot_index = i;
				break;
			}
		}
	}
	return pivot_index;
}

//static inline void exchange(int *num1,int *num2)
//{
//	if (*num1 != *num2)
//	{
//		int tmp = *num1;
//		*num1 = *num2;
//		*num2 = tmp;
//	 }
//}


#include "select_sort.h"

void SelectSortUp(int * array, int num)
{
	int i = 0,j = 0;
	for (i=0;i<num-1;i++)
	{
		int min_index = i;
		for (j = i + 1; j < num ; j++)
		{
			if (array[min_index] > array[j])//ĞŞ¸Ä·ûºÅ¼´ÎªÏÂ½µÅÅĞò
				min_index = j;
			if (min_index != i)   
			{
				int tmp = array[min_index];
				array[min_index] = array[i];
				array[i] = tmp;
			}
		}
	}
}

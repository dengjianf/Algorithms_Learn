#include "insert_sort.h" 

void InsertSort(int *array,int num)//插入排序 最坏运行时间：θ(n^2)
{
	int i = 0,j=0;
	for (i = 1;i < num;i++) //抽出第 i 个元素，插入已排序好的 Array[0...i-1]的数组
	{	
		j = i - 1;
		while (j >=0 && array[j] <= array[j+1])//相邻比较，不符顺序则换位,降序只需修该比较符
		{
			int tmp = array[j+1];
			array[j+1] = array[j];
			array[j] = tmp;
			j--;
		}
	}
}

#include "merge_sort.h"
int Merge_Sort(int * array, int left, int right)
{
	if(left>right)
	return 0;
	int mid=(left + right) / 2;//�Զ�ȡ��
	Merge_Sort(array,left,mid);       //���Σ�
	Merge_Sort(array, mid + 1, right);
	Merge(array, left, mid, right);
}
static int Merge(int *array, int left, int mid, int right)
{
	if (left < mid < right)
	{
		int _mid = mid,index=0;
		int *_array = array; //ָ���ַ��ֵ

		while (left != _mid&&mid != right)
		{
			if (_array[left] >= _array[mid])
			{
				array[index] = _array[mid];
				mid++;
				index++;
			}
			else
			{
				array[index] = _array[left];
				left++;
				index++;
			}
		}
//����ʣ���
		while (left != _mid)  
		{
			array[index] = _array[left];
			index++;
			left++;
		}
		while (mid != right)
		{
			array[index] = _array[mid];
			mid++;
			index++;
		}
//
		return 0;
	}
	else
		return -1;


}

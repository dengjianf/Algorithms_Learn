#include "insert_sort.h" 

void InsertSort(int *array,int num)//�������� �����ʱ�䣺��(n^2)
{
	int i = 0,j=0;
	for (i = 1;i < num;i++) //����� i ��Ԫ�أ�����������õ� Array[0...i-1]������
	{	
		j = i - 1;
		while (j >=0 && array[j] <= array[j+1])//���ڱȽϣ�����˳����λ,����ֻ���޸ñȽϷ�
		{
			int tmp = array[j+1];
			array[j+1] = array[j];
			array[j] = tmp;
			j--;
		}
	}
}

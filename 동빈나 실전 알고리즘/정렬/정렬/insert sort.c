#include <stdio.h>

int main()
{
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 9; i++)
	{
		j = i;	//���� ������ ���Ҹ� ����
		while (j >= 0 && array[j] > array[j + 1])	//������ ������ ������ ������ ���� ũ�ٸ� ��ġ�� �ٲپ� �ش�
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
#include <stdio.h>

int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quickSort(int* data, int start, int end)
{//start�� ������ �ϴ� ������ ���� ���� ��
 // end�� ������ �ϴ� ������ ���� ������ ��
	if (start >= end)	//start�� end���� ũ�ų� ���ٴ� ���� ��Ұ� 1���� ���
	{
		return;
	}
	int key = start;	//�ǹ��� ���� ������ ��
	int i = start + 1;	//���ʺ��� �ϳ��� ū ���� ã�� �ε���
	int j = end;		//�����ʺ��� �ϳ��� ���� ���� ã�� �ε���
	int temp;
	
	while (i <= j)	//�������� ����
	{
		while (data[i] <= data[key])	//�ǹ����� ū���� ������ ����
		{
			i++;
		}
		while (data[j] >= data[key] && j > start)	//�ǹ����� �������� ������ ����
		{
			j--;
		}
		if (i > j)	//������ ���¸� �ǹ��� ������ ��ü
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else		//�������� �ʾҴٸ� ���� �ٲپ���
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}
int main()
{
	quickSort(data, 0, number - 1);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}
}
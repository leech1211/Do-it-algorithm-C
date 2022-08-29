#include <stdio.h>

int main()
{
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 9; i++)
	{
		j = i;	//현재 정렬할 원소를 선택
		while (j >= 0 && array[j] > array[j + 1])	//정렬할 원소의 값보다 왼쪽의 값이 크다면 위치를 바꾸어 준다
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
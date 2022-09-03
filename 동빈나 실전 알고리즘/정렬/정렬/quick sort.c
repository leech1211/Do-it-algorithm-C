#include <stdio.h>

int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quickSort(int* data, int start, int end)
{//start는 정렬을 하는 집합의 가장 왼쪽 값
 // end는 정렬을 하는 집합의 가장 오른쪽 값
	if (start >= end)	//start가 end보다 크거나 같다는 말은 요소가 1개인 경우
	{
		return;
	}
	int key = start;	//피벗은 가장 왼쪽의 값
	int i = start + 1;	//왼쪽부터 하나씩 큰 값을 찾는 인덱스
	int j = end;		//오른쪽부터 하나씩 작은 값을 찾는 인덱스
	int temp;
	
	while (i <= j)	//엇갈릴때 까지
	{
		while (data[i] <= data[key])	//피벗보다 큰값을 만날때 까지
		{
			i++;
		}
		while (data[j] >= data[key] && j > start)	//피벗보다 작은값을 만날때 까지
		{
			j--;
		}
		if (i > j)	//엇갈린 상태면 피벗과 작은값 교체
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else		//엇갈리지 않았다면 서로 바꾸어줌
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
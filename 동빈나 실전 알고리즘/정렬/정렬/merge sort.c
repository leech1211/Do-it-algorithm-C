#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int sorted[8];		//정렬된 값을 넣어줄 공간
					//정렬배열을 반드시 전역변수로 - 계속해서 추가배열이 필요하기 때문 매번 새로운 배열을 만드는 것이 아니기에 메모리가 효율적이다

void merge(int a[], int m, int middle, int n)	//합쳐지는 두 집합의 시작점, 중간점, 끝점
{
	int i = m;
	int j = middle + 1;
	int k = m;
	//작은순서대로 배열에 삽입
	while (i <= middle && j <= n)
	{
		if (a[i] <= a[j])
		{
			sorted[k] = a[i];
			i++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	//남은 데이터도 삽입
	if (i > middle)
	{
		for (int t = j; t <= n; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	//정렬된 배열을 삽입
	for (int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergesort(int a[], int m, int n)
{
	//크기가 1보다 큰 경우
	if (m < n)
	{
		int middle = (m + n) / 2;
		//정중앙을 가리킴
		mergesort(a, m, middle);
		mergesort(a, middle + 1, n);
		//중앙을 기점으로 정렬
		merge(a, m, middle, n);
		//정렬된 배열을 나중에 합침
	}
}

int main()
{
	int number = 8;
	int arr[8] = { 7,6,5,8,3,5,9,1 };
	mergesort(arr, 0, number - 1);
	for (int i = 0; i < number; i++)
	{
		printf("%d ", arr[i]);
	}

}

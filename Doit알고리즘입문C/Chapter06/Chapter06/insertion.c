#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

//단순 삽입 정렬
void insertion(int a[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int temp = a[i];
		for (j = i; j > 0 && a[j-1] > temp; j-- )
		{
			a[j] = a[j - 1];
		}
		a[j] = temp;
	}
}

int main()
{
	int i, nx;
	int* x;
	puts("단순삽입정렬");

	printf("요소개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);

	puts("오름차순으로 정렬했습니다");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : %d\n", i, x[i]);
	}

	free(x);
}
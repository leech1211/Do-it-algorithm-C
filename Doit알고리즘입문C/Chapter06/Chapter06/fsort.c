#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void fsort(int a[], int n, int max)
{
	int i;
	int* f = calloc(max + 1, sizeof(int));		//누적 도수
	int* b = calloc(n, sizeof(int));				//작업용 목적배열

	for (i = 0; i <= max; i++) f[i] = 0;					//step0
	for (i = 0; i < n; i++) f[a[i]]++;						//step1
	for (i = 1; i <= max; i++) f[i] += f[i - 1];			//step2
	for (i = n - 1; i >= 0; i--) b[--f[a[i]]] = a[i];		//step3
	for (i = 0; i < n; i++) a[i] = b[i];					//step4

	free(b);
	free(f);
}

int main()
{
	int i, nx;
	int* x;
	const int max = 100;
	puts("도수 정렬");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("0 ~ %d 의 정수를 입력하세요\n", max);
	for (i = 0; i < nx; i++)
	{
		do
		{
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < 0 || x[i] > max);
		
	}
	fsort(x, nx,max);
	puts("오름차순으로 정렬했습니다");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);
	return 0;
}
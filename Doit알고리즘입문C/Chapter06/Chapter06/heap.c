#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t; }while(0)
//힙 정렬 프로그램

//a[left] ~ a[right]을 힙으로 만드는 함수

static void downheap(int a[], int left, int right)
{
	int temp = a[left];
	int child;
	int parent;
	for (parent = left; parent < (right + 1) / 2; parent = child)
	{
		int cl = parent * 2 + 1;
		int cr = cl + 1;
		child = (cr <= right && a[cr] > a[cl]) ? cr : cl;	//큰값을 선택
		if (temp >= a[child])
			break;
		a[parent] = a[child];
	}
	a[parent] = temp;
}

//힘 정렬 함수
void heapsort(int a[], int n)
{
	int i;
	for (i = (n - 1) / 2; i >= 0; i--)
		downheap(a, i, n - 1);
	for (i = n - 1; i > 0; i--)
	{
		swap(int, a[0], a[i]);
		downheap(a, 0, i - 1);
	}
}

int main()
{
	int i, nx;
	int* x;
	puts("힙 정렬");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	heapsort(x, nx);	
	puts("오름차순으로 정렬했습니다");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);
	return 0;
}
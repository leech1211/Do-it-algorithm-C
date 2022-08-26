//보초법
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

//요소의 개수가 n인 배열a 에서 key와 일치하는 요소를 선형 검색(보초법)
int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;
	while (1) {
		if (a[i] == key)
			break;
		i++;
	}
	return i == n ? -1 : i;
}

int main()
{
	int i, nx, ky, idx;
	int* x;		//배열 첫번째 요소에 대한 포인터

	puts("선형 검색(보초법)");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	//요소의 개수가 nx+1인 배열 선언
	for (int i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("검색값 : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)
		puts("검색에 실패했습니다");
	else
		printf("%d는 x[%d]에 있습니다\n", ky,idx);
	free(x);
}
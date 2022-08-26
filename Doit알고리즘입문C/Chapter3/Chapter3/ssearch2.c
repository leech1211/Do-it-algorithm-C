#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
	for (int i = 0 ;i < n; i++)
	{
		if (a[i] == key)
			return i;	//검색성공
	}
	return -1; //검색실패
}

int main()
{
	int i, nx, ky, idx;
	int* x;		//요소의 첫 번째 요소에 대한 포인터
	puts("선형 검색");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));		//요소의 개수가 nx인 int형 배열을 생성
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값 : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);		//선형검색
	if (idx == -1)
		puts("검색에 실패했습니다");
	else
		printf("%d는 x[%d]에 있습니다\n", ky, idx);
	free(x);

}
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//요소의 개수가 n개인 배열 a에서 key와 일치하는 요소를 이진 검색
int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;
	int pc;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)		//검색 성공
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);
	return -1;					//검색 실패
}

int main()
{
	int i, nx, ky, idx;
	int* x;		//요소의 첫 번째 요소에 대한 포인터
	puts("선형 검색");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));		//요소의 개수가 nx인 int형 배열을 생성
	printf("오름차순으로 입력하세요 \n");
	printf("x[0] : ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);			//오름차순이 아니라면 다시 입력		
	}
	printf("검색값 : ");
	scanf("%d", &ky);
	idx = bin_search(x, nx, ky);		//이진검색
	if (idx == -1)
		puts("검색에 실패했습니다");
	else
		printf("%d는 x[%d]에 있습니다\n", ky, idx);
	free(x);
}
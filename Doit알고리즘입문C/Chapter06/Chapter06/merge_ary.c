#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//정렬을 마친 배열을 병합하는 프로그램
//정렬을 마친 배열 a와 b를 병합하여 c에 저장

void merge(const int a[], int na, const int b[], int nb, int c[])
{
	int pa = 0;
	int pb = 0;
	int pc = 0;
	while (pa < na && pb < nb)
		c[pc++] = (a[pa] <= b[pb] ? a[pa++] : b[pb++]);
	while (pa < na)
		c[pc++] = a[pa++];
	while (pb < nb)
		c[pc++] = b[pb++];
}

int main()
{
	int i, na, nb;
	int* a, * b, * c;
	printf("a의 요소개수 : "); scanf("%d", &na);
	printf("b의 요소개수 : "); scanf("%d", &nb);
	a = calloc(na, sizeof(int));
	b = calloc(nb, sizeof(int));
	c = calloc(na + nb, sizeof(int));
	printf("a[0] : ");
	scanf("%d", &a[0]);
	for (i = 1; i < na; i++)
	{
		do {
			printf("a[%d] : ", i);
			scanf("%d", &a[i]);
		} while (a[i] < a[i - 1]);
	}
	printf("b[0] : ");
	scanf("%d", &b[0]);
	scanf("%d", &b[0]);
	for (i = 1; i < na; i++)
	{
		do {
			printf("b[%d] : ", i);
			scanf("%d", &b[i]);
		} while (b[i] < b[i - 1]);
	}

	merge(a, na, b, nb, c);
	puts("배열 a와 b를 병합하여 c에 저장했습니다");
	for (i = 0; i < na + nb; i++)
	{
		printf("c[%2d] = %2d\n", i, c[i]);
	}
	free(a); free(b); free(c);

	return 0;

}
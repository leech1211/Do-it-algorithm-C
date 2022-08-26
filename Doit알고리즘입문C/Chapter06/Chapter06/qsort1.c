//qsort�Լ��� ����Ͽ� �����迭�� ������������ ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int�� ���Լ�
int int_cmp(const int* a, const int* b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main()
{
	int i, nx;
	int* x;
	printf("qsort�� ���� ����\n");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	qsort(x, nx, sizeof(int), (int(*)(const void*, const void*))int_cmp);
	puts("������������ �����߽��ϴ�");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);
}

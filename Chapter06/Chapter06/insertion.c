#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

//�ܼ� ���� ����
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
	puts("�ܼ���������");

	printf("��Ұ��� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);

	puts("������������ �����߽��ϴ�");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : %d\n", i, x[i]);
	}

	free(x);
}
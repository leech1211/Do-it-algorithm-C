#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�� �����Լ�
void shell(int a[], int n)
{
	int i, j, h;
	for (h = n / 2; h > 0; h /= 2)
	{
		for (i = h; i < n; i++)
		{
			int temp = a[i];
			for (j = i - h; j >= 0 && a[j] > temp; j -= h)
			{
				a[j + h] = a[j];
			}
			a[j + h] = temp;
		}
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

	shell(x, nx);

	puts("������������ �����߽��ϴ�");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : %d\n", i, x[i]);
	}

	free(x);
}
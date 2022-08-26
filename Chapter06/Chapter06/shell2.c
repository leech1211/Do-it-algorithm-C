#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�� �����Լ� h = 1,4,13...3i + 1
void shell(int a[], int n)
{
	int i, j, h;
	for (h = 1; h < n / 9; h = h * 3 + 1)
		;	//h�� �ʱⰪ�� ���ϴ� �ڵ� 1���� x3 + 1�� ����� ������ n / 9�� �����ʴ� ���� ū��
	{
		for (; h > 0; h /= 3)
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
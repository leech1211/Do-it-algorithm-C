#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int* a, const int* b)
{
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}

int main()
{
	int i, nx, ky;
	int* x;					//�迭�� ù��° ������
	int* p;					//�˻��� ��ҿ� ���� ������
	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));		//����� ������ nx�� int�� �迭�� ����

	printf("������������ �Է��ϼ��� \n");
	printf("x[0] :");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] > x[i - 1]);		//���� ������ ũ�� �ٽ� �Է�
	}
	printf("�˻��� : ");
	scanf("%d", &ky);

	p = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void*)) int_cmpr);

	if (p == NULL)
		puts("�˻��� �����߽��ϴ�");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�", ky, (int)(p - x));
	free(x);
}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
	for (int i = 0 ;i < n; i++)
	{
		if (a[i] == key)
			return i;	//�˻�����
	}
	return -1; //�˻�����
}

int main()
{
	int i, nx, ky, idx;
	int* x;		//����� ù ��° ��ҿ� ���� ������
	puts("���� �˻�");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));		//����� ������ nx�� int�� �迭�� ����
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻��� : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);		//�����˻�
	if (idx == -1)
		puts("�˻��� �����߽��ϴ�");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�\n", ky, idx);
	free(x);

}
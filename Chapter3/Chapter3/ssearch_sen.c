//���ʹ�
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

//����� ������ n�� �迭a ���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(���ʹ�)
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
	int* x;		//�迭 ù��° ��ҿ� ���� ������

	puts("���� �˻�(���ʹ�)");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	//����� ������ nx+1�� �迭 ����
	for (int i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("�˻��� : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)
		puts("�˻��� �����߽��ϴ�");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�\n", ky,idx);
	free(x);
}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void move(int no, int x, int y)
//���ݰ���, ���۱��, ��ǥ���
{
	if (no > 1)
	{
		move(no - 1, x, 6 - x - y);										//�׷��� ���� ��տ��� �߰� �������
	}//��� ��ȣ�� 1,2,3 �̶�� �Ҷ� ��� ��ȣ�� ���� 6
	//�߰������ 6-x-y�� ���� �� �ִ�
	printf("����[%d]�� %d ��տ��� %d ������� �ű�\n", no, x, y);
	if (no > 1)
	{
		move(no - 1, 6 - x - y, y);										//�׷��� �߰� ��տ��� ��ǥ �������
	}
}

int main()
{
	int n;		//������ ����
	printf("�ϳ����� ž\n ���ݰ��� : ");
	scanf("%d", &n);
	move(n, 1, 3);
}
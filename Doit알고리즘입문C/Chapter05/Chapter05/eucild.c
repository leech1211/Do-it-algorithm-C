#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main()
{
	int x, y;
	puts("�� ������ �ִ� ������� ���մϴ�");
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("�ִ� ������� %d�Դϴ�\n", gcd(x, y));

	return 0;
}
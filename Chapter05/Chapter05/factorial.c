#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int x;
	printf("������ �Է� : ");
	scanf("%d", &x);
	printf("%d�� ���� �������� %d �Դϴ�\n", x, factorial(x));

	return 0;
}

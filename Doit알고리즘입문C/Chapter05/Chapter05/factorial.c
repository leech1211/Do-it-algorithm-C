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
	printf("정수를 입력 : ");
	scanf("%d", &x);
	printf("%d의 순차 곱셈값은 %d 입니다\n", x, factorial(x));

	return 0;
}

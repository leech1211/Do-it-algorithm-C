#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void recur(int n)
{
	if (n > 0)
	{
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}

int main()
{
	int x;
	printf("정수를 입력하세요 : ");
	scanf("%d", &x);
	recur(x);

	return 0;
}
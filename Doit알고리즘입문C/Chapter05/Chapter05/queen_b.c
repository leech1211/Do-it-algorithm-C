#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int pos[8];

//���� ��ġ�� ���
void print()
{
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%2d", pos[i]);
	}
	putchar('\n');
}

// i���� ���� ��ġ
void set(int i)
{
	int j;
	for (j = 0; j < 8; j++)
	{
		pos[i] = j;
		if (i == 7)
		{
			print();
		}
		else
		{
			set(i + 1);
		}
	}
}

int main()
{
	set(0);
}
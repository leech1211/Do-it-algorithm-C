#define _CRT_SECURE_NO_WARNINGS 
//8queen 문제 풀이

#include <stdio.h>

int flag_a[8];		//각 행에 퀸을 배치 했는가
int flag_b[15];		//대각선 / 에 퀸을 배치했는가
int flag_c[15];		// 대각선 \ 에 퀸을 배치했는가
int pos[8];			//각 열에서의 퀸의 위치

void print()
{
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%2d", pos[i]);
	}
	putchar('\n');
}

void set(int i)
{
	int j;
	for (j = 0; j < 8; j++)
	{	
		if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7])
		{
			pos[i] = j;
			if (i == 7)	//모든 열에 배치를 마침
			{
				print();
			}				
			else
			{
				flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
				set(i + 1);
				flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
			}
		}
	}
}

int main()
{
	int i;
	for (i = 0; i < 8; i++)
		flag_a[i] = 0;
	for (i = 0; i < 15; i++)
	{
		flag_b[i] = flag_c[i] = 0;
	}
	set(0);

	return 0;
}

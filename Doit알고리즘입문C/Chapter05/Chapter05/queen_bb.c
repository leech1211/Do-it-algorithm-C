#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//각 행, 각 열 에 1개의 퀸을 배치하는 조합을 재귀적으로 나열

int flag[8];		//각 행에 퀸을 배치했는지 체크하는 배열
int pos[8];			//각 열에서 퀸의 위치

//각열에서 퀸의 위치를 출력
void print()
{
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%2d", pos[i]);
		
	}
	putchar('\n');
}

//i열 에서 알맞은 위치에 퀸을 배치
void set(int i)
{
	int j;
	for (j = 0; j < 8; j++)
	{
		if (!flag[j])		//j행에 퀸을 배치하지 않았다면
		{
			pos[i] = j;
			if (i == 7)
			{
				print();	//모든열의 배치를 마침
			}
			else
			{
				flag[j] = 1;
				set(i + 1);
				flag[j] = 0;
			}
		}
	}
}

int main()
{
	int i;
	for (i = 0; i < 8; i++)
	{
		flag[i] = 0;
	}
	set(0);

	return 0;
}
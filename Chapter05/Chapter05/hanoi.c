#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void move(int no, int x, int y)
//원반개수, 시작기둥, 목표기둥
{
	if (no > 1)
	{
		move(no - 1, x, 6 - x - y);										//그룹을 시작 기둥에서 중간 기둥으로
	}//기둥 번호를 1,2,3 이라고 할때 기둥 번호의 합이 6
	//중간기둥은 6-x-y로 구할 수 있다
	printf("원반[%d]를 %d 기둥에서 %d 기둥으로 옮김\n", no, x, y);
	if (no > 1)
	{
		move(no - 1, 6 - x - y, y);										//그룹을 중간 기둥에서 목표 기둥으로
	}
}

int main()
{
	int n;		//원반의 개수
	printf("하노이의 탑\n 원반개수 : ");
	scanf("%d", &n);
	move(n, 1, 3);
}
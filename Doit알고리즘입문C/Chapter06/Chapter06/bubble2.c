//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#define swap(type,x,y) do{type t = x; x = y; y = t;}while(0)

//버블정렬(교환횟수가 0이면 이미 다 정렬된것 이므로 작업을 중단)
void bubble(int a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		int exchg = 0;
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				exchg++;					//교환하는 경우
			}
		}
		if (exchg == 0)						//교환 없을 경우 종료
			break;
	}
}


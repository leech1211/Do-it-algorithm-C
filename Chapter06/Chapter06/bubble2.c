//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#define swap(type,x,y) do{type t = x; x = y; y = t;}while(0)

//��������(��ȯȽ���� 0�̸� �̹� �� ���ĵȰ� �̹Ƿ� �۾��� �ߴ�)
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
				exchg++;					//��ȯ�ϴ� ���
			}
		}
		if (exchg == 0)						//��ȯ ���� ��� ����
			break;
	}
}


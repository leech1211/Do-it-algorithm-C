//버블정렬(어느시점 이후에 교환이 수행되지 않는다면 그보다 앞쪽요소는 이미 정렬을 마친 상태이다)

void bubble(int a[], int n)
{
	int k = 0;
	while (k < n - 1)
	{
		int j;
		int last = n - 1;
		for (j = n - 1; j > k; j--)
		{
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		}
		k = last;
	}
}
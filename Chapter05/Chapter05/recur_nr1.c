void recur(int n)
{
TOP:
	if (n > 0)
	{
		recur(n - 1);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
}
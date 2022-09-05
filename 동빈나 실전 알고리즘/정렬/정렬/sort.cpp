#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a,a+10);	//배열자체의 메모리주소, 정렬하는 마지막 원소의 메모리주소
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}
}
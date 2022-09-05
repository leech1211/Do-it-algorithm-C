#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a < b;
	//a가 b보다 작을때 우선적으로 정렬을 하겠다
	//더 작은값이 앞으로 - 오름차순 -
	//a > b 인경우 false가 반환되어 내림차순
}

int main()
{
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a,a+10,compare);	//배열자체의 메모리주소, 정렬하는 마지막 원소의 메모리주소
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}
}
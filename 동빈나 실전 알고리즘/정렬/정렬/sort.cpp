#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a < b;
	//a�� b���� ������ �켱������ ������ �ϰڴ�
	//�� �������� ������ - �������� -
	//a > b �ΰ�� false�� ��ȯ�Ǿ� ��������
}

int main()
{
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a,a+10,compare);	//�迭��ü�� �޸��ּ�, �����ϴ� ������ ������ �޸��ּ�
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}
}
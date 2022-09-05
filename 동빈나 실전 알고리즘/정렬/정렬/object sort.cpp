#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
	string name;
	int score;
	Student(string n, int s)
	{
		this->name = n;
		this->score = s;
	}
	//���ı��� - ������ ���� ����
	bool operator <(Student& student)
	{
		return this->score < student.score;
	}
};

int main()
{
	Student student[] = {
		Student("�л�1",90),
		Student("�л�2",93),
		Student("�л�3",97),
		Student("�л�4",87),
		Student("�л�5",92)
	};
	sort(student, student + 5);
	for (int i = 0; i < 5; i++)
	{
		cout << student[i].name << " ";
	}
}

int add(int a, int b)
{
	return a + b;
}
int add(double a, double b)
{
	return a + b;
}
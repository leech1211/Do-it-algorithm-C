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
	//정렬기준 - 점수가 낮은 순서
	bool operator <(Student& student)
	{
		return this->score < student.score;
	}
};

int main()
{
	Student student[] = {
		Student("학생1",90),
		Student("학생2",93),
		Student("학생3",97),
		Student("학생4",87),
		Student("학생5",92)
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
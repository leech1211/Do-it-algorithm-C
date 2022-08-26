#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����ü �迭 ����

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

//Person �� ���Լ� (�̸� �������� ����)
int npcmp(const Person* x, const Person* y)
{
	return strcmp(x->name, y->name);
}

//Person �� ���Լ� (Ű �������� ����)
int hpcmp(const Person* x, const Person* y)
{
	return x->height < y->height ? -1 : x->height > y->height ? 1 : 0;
}

//Person �� ���Լ� (������ �������� ����)
int wpcmp(const Person* x, const Person* y)
{
	return x->weight < y->weight ? 1 : x->weight > y->weight ? -1 : 0;
}

void print_person(const Person x[], int no)
{
	int i;
	for (i = 0; i < no; i++)
	{
		printf("%-10s %dcm %dkg\n", x[i].name, x[i].height, x[i].weight);
	}
}

int main()
{
	Person x[] = {
		{"sunmi",170,52 },
		{"yoobin",180,70},
		{"sohee",172,63},
		{"jina",165,50} };

	int nx = sizeof(x) / sizeof(x[0]);

	puts("���� ��");
	print_person(x, nx);

	//�̸� ��������
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*)) npcmp);
	puts("\n �̸� ������������ ���� ��");
	print_person(x, nx);

	//Ű ��������
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*)) hpcmp);
	puts("\n Ű ������������ ���� ��");
	print_person(x, nx);

	//������ ��������
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*)) wpcmp);
	puts("\n ������ ������������ ���� ��");
	print_person(x, nx);
}
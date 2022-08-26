#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//구조체 배열 정렬

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

//Person 형 비교함수 (이름 오름차순 정렬)
int npcmp(const Person* x, const Person* y)
{
	return strcmp(x->name, y->name);
}

//Person 형 비교함수 (키 오름차순 정렬)
int hpcmp(const Person* x, const Person* y)
{
	return x->height < y->height ? -1 : x->height > y->height ? 1 : 0;
}

//Person 형 비교함수 (몸무게 내림차순 정렬)
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

	puts("정렬 전");
	print_person(x, nx);

	//이름 오름차순
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*)) npcmp);
	puts("\n 이름 오름차순으로 정렬 후");
	print_person(x, nx);

	//키 오름차순
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*)) hpcmp);
	puts("\n 키 오름차순으로 정렬 후");
	print_person(x, nx);

	//몸무게 내림차순
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*)) wpcmp);
	puts("\n 몸무게 내림차순으로 정렬 후");
	print_person(x, nx);
}
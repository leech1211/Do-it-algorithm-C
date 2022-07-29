#pragma once
//int형 스택
#ifndef __IntStack
#define __IntStack


//스택을 구현하는 구조체
typedef struct {
	int max;		//스택용량
	int ptr;		//스택 포인터
	int* stk;		//스택의 첫 요도 
}IntStack;

//스택 초기화
int Initialize(IntStack* s, int max);

//스택 데이터 푸시
int Push(IntStack* s, int x);

//스택 데이터 팝
int Pop(IntStack* s, int* x);

//스택 데이터 피크
int Peek(const IntStack* s, int* x);

//스택 비우기
void Clear(IntStack* s);

//스택 최대용량
int Capacity(const IntStack* s);

//스택 데이터 개수
int Size(const IntStack* s);

//스택이 비어있는가
int IsEmpty(const IntStack* s);

//스택이 가득 찼는가
int IsFull(const IntStack* s);

//스택에서 검색
int Search(const IntStack* s, int x);

//모든 데이터 출력
void Print(const IntStack* s);

//스택 종료
void Terminate(IntStack* s);
#endif
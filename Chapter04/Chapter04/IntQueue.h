//int형 큐 intQueue(헤더)
#ifndef __IntQueue
#define __IntQueue

//큐를 구현하는 구조체
typedef struct
{
	int max;		//최대용량
	int num;		//현재요소 개수
	int front;		//프런트
	int rear;		//리어
	int* que;		//맨앞의 요소에 대한 포인터
}IntQueue;

//큐 초기화
int Initialize(IntQueue* q, int max);

//큐 데이터 인큐
int Enque(IntQueue* q, int x);
//큐 데이터 디큐
int Deque(IntQueue* q, int *x);
//큐 데이터 피크
int Peek(const IntQueue* q, int *x);
//모든 데이터 삭제
void Clear(IntQueue* q);
//큐의 최대 용량
int Capacity(const IntQueue* q);
//큐에 저장된 데이터의 개수
int Size(const IntQueue* q);
//큐가 비어있는가
int IsEmpty(const IntQueue* q);
//큐가 가득 차있는가
int IsFull(const IntQueue* q);
//큐에서 검색
int Search(const IntQueue* q, int x);
//모든 데이터 출력
void Print(IntQueue* q);
//큐 종료
void Terminate(IntQueue* q);
#endif
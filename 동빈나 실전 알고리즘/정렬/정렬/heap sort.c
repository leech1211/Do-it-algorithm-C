#include <stdio.h>

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main()
{
	//트리구조를 힙구조로 바꾼다
	for (int i = 1; i < number; i++)
	{
		int c = i;
		do {
			int root = (c - 1) / 2;		//root는 부모노드
			if (heap[root] < heap[c])	//자식이 부모보다 큰 경우
			{
				int temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			c = root;		//자식의 부모로 이동해 반복
		} while (c != 0);
	}
	//크기를 줄여가며 힙을 구성
	for (int i = number - 1; i >= 0; i--)
	{
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		//가장 큰 노드와 마지막 노드를 교환

		int root = 0;	//부모노드
		int c = 1;
		do {
			c = 2 * root + 1;
			//자식중에 더 큰값 찾기
			if (heap[c] < heap[c + 1] && c < i - 1)
			{
				c++;
				//두 자식노드중 오른쪽 값이 더 크다면 c++을 통해 오른값을 가리키도록
			}
			//루트보다 자식이 더 크다면 교환
			if(heap[root] < heap[c] && c < i)
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
			//다시 c를 root로 이동시켜 재귀적인 실행
		} while (c < i);
	}

	for (int i = 0; i < number; i++)
	{
		printf("%d ", heap[i]);
	}
}
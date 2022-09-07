#include <stdio.h>

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main()
{
	//Ʈ�������� �������� �ٲ۴�
	for (int i = 1; i < number; i++)
	{
		int c = i;
		do {
			int root = (c - 1) / 2;		//root�� �θ���
			if (heap[root] < heap[c])	//�ڽ��� �θ𺸴� ū ���
			{
				int temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			c = root;		//�ڽ��� �θ�� �̵��� �ݺ�
		} while (c != 0);
	}
	//ũ�⸦ �ٿ����� ���� ����
	for (int i = number - 1; i >= 0; i--)
	{
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		//���� ū ���� ������ ��带 ��ȯ

		int root = 0;	//�θ���
		int c = 1;
		do {
			c = 2 * root + 1;
			//�ڽ��߿� �� ū�� ã��
			if (heap[c] < heap[c + 1] && c < i - 1)
			{
				c++;
				//�� �ڽĳ���� ������ ���� �� ũ�ٸ� c++�� ���� �������� ����Ű����
			}
			//��Ʈ���� �ڽ��� �� ũ�ٸ� ��ȯ
			if(heap[root] < heap[c] && c < i)
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
			//�ٽ� c�� root�� �̵����� ������� ����
		} while (c < i);
	}

	for (int i = 0; i < number; i++)
	{
		printf("%d ", heap[i]);
	}
}
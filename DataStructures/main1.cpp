#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	int i = 0;
	int f = 7;
	Queue* b = new Queue{ 0 };
	initQueue(b, 0);
	enqueue(b, f);
	enqueue(b, 3);
	dequeue(b);
	printf("%d\n", isFull(b));
	cleanQueue(b);
	for (i = 0; i < b->size; i++)
	{
		printf("%d\n", b->arr[i]);
	}
	return 0;
}
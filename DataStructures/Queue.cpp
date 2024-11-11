#include <iostream>
#include "Queue.h"
void enqueue(Queue* q, unsigned int newValue)
{
	int* ar = new int[q->size + 1];
	int i = 0;
	for (i = 0; i < q->size; i++)
	{
		ar[i] = q->arr[i];
	}
	if (q->size != 0)
	{
		ar[i] = newValue;
		delete[] q->arr;
		q->arr = ar;
	}
	if (q->size == 0)
	{
		ar[0] = newValue;
		q->arr = ar;
	}
	q->size++;
}
int dequeue(Queue* q)
{
	int i = 0;
	int save = -1;
	if (q->size == 0)
	{
		return save;
	}
	if (q->size == 1)
	{
		save = q->arr[0];
		q->arr[0] = 0;
		q->size--;
		return save;
	}
	int* ar = new int[q->size - 1];
	for (i = 0; i < q->size-1; i++)
	{
		ar[i] = q->arr[i + 1];
		
	}
	delete[] q->arr;
	q->arr = ar;
	q->size--;
	return save;
}
void initQueue(Queue* q, unsigned int size)
{
	q->size = size;
}
void cleanQueue(Queue* q)
{
	int* ar = new int[q->size];
	delete[] q->arr;
	q->arr = ar;
	q->size = 0;
}
bool isFull(Queue* s)
{
	return (s->arr[s->size - 1] !=-1);
}
bool isEmpty(Queue* s)
{
	return (s->arr == NULL);
}
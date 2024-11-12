#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
using namespace std;

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	
	link* curr = new link;
	Stack* s = new Stack;
	initStack(s);
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	curr = s->head;
	for (i = 0; i < size; i++)
	{
		nums[i] = curr->value;
		if (size != i + 1)
		{
			curr = curr->next;
		}
	}
	cleanStack(s);
	delete s;
}
int* reverse10()
{
	int i = 0;
	int* arr = new int[10];
	cout << "enter your 10 numbers" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << i+1 << " ";
		std::cin >> arr[i];
	}
	reverse(arr, 10);
	return arr;
}
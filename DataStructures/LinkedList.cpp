#include "Stack.h"
#include "LinkedList.h"
#include <iostream>
link* initL(int val)
{
	link* node = new link;
	node->next = NULL;
	node->value = val;
	return node;
}
void printL(link* head)
{
	link* curr = new link;
	curr = head;
	while (curr != NULL)
	{
		printf("%d\n", curr->value);
		curr = curr->next;
	}
	delete curr;
}


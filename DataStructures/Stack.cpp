#include "Stack.h"
#include "LinkedList.h"
#include <iostream>
void push(Stack* s, unsigned int element)
{
	link* node = new link;
	node = initL(element);
	if (s->head == NULL)
	{
		s->head = node;
	}
	else
	{
		node->next = s->head;
		s->head = node;//next
	}
}

void initStack(Stack* s)
{
	s->head = new link;
	s->head = NULL;
}

void cleanStack(Stack* s)
{
	link* curr = s->head;
	link* next = NULL;
	while (curr != NULL)//going on all the list and removing all the nodes
	{
		next = curr->next;
		delete curr;
		curr = next;
	}
	s->head = NULL;
}

int pop(Stack* s)// Return -1 if stack is empty
{
	link* node = new link;
	if (s->head == NULL)
	{
		return -1;
	}
	if (s->head->next == NULL)
	{
		s->head = NULL;
	}
	else
	{
		node = s->head;
		s->head = s->head->next;
		delete node;
	}
	return 0;
}
void deleteAll(Stack* s)
{
	delete s->head;
	delete s;
}

bool isEmpty(Stack* s)
{
	return (s->head == NULL);
}
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
void deleteAll(Stack* s)
{
	delete s->head;
	delete s;
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
}

#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
int main()
{
	Stack* s = new Stack;
	initStack(s);
	push(s, 5);
	pop(s);
	push(s, 7);
	push(s, 2);
	push(s, 1);
	pop(s);
	//cleanStack(s);
	printL(s->head);
	return 0;
}
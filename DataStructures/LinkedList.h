#include <cstddef>
#ifndef LINKEDLISTH
#define LINKEDLISTH

typedef struct link
{
	struct link* next;
	int value;
} link;
link* initL(int val);
void printL(link* head);
#endif
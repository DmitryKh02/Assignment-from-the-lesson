#include "stack.h"

void initStack(TStack& top)
{
	top = 0;
}

bool isEmpty(TStack top)
{
	return top == 0;
}

void push(TStack& top, int elem)
{
	TStack p = new Node;
	p->data = elem;
	p->next = top;
	top = p;
}

int pop(TStack& top)
{
	TStack p = top;
	int elem = p->data;

	top = top->next;

	p->next = 0;
	delete p;

	return elem;
}

void clearStack(TStack& top)
{
	while (!isEmpty(top)) {
		pop(top);
	}
	top = 0;
}
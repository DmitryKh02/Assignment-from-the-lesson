#pragma once

struct Node {
	int data;
	Node* next;
};

typedef Node* TStack;

void initStack(TStack& top);

bool isEmpty(TStack top);

void push(TStack& top, int elem);


int pop(TStack& top);


void clearStack(TStack& top);

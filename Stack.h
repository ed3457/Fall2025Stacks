#pragma once
#include <iostream>
using namespace std;
struct node
{
	int info;

	node* next;

};

class Stack
{
private:
	int size; // how many nodes we have
	node* head; // pointer to the first node

public:
	void push(int newelement);
	int pop();
	int top();
	int getSize();
	bool isEmpty();
	void clear();// remove all the elements in the list 
	Stack();

};


#include "Stack.h"

void Stack::push(int newelement)
{
	// step1: create a new node 
	node* newNode = new node();
	newNode->info = newelement;
	newNode->next = nullptr;
	// step2: make the next pointer inside the newnode equal to the head
	newNode->next = head;
	//step3: make the head point to the new node
	head = newNode;
	// step4: increment the size of the linkedlist
	size++;
}

int Stack::pop()
{
	// step0: validation
	if (isEmpty())
		throw 1; // list is empty 

	// step1: create a pointer to the head 
	node* temp = head;

	// step2: move the head to head->next
	head = head->next;

	// step3: delete the temp node
	// extract the data first 
	int top = temp->info;
	delete temp;

	// step4: decrease the size
	size--;

	return top;
}

int Stack::top()
{   //TODO: add validation 
	return head->info;
}

int Stack::getSize()
{
	return size;
}

bool Stack::isEmpty()
{
	return size==0;
}

Stack::Stack()
{
	size = 0;
	head = nullptr;
}

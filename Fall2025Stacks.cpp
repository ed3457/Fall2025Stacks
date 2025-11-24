// Fall2025Stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std; 
int main()
{
	Stack st1;

	st1.push(10);
	st1.push(20);
	st1.push(30);
	st1.push(40);
	/*st1.pop();
	cout << st1.top() << endl;*/

	// write code to sum the items in a stack: 

	Stack temp;
	int sum = 0;
	int tempElement;
	while (!st1.isEmpty())
	{   
		tempElement = st1.pop();
		temp.push(tempElement);
		sum += tempElement;

	}

	cout << sum << endl;

	while (!temp.isEmpty())
	{
		st1.push(temp.pop());
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

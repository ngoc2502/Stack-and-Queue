#include"Stack_Slist.h"
# include<iostream>
// manipulate stack with single linked list

using namespace std;
int main()
{
	stack* s = new stack;
	int n = 0;
	int x = 0;

	initialize(&s);
	cout << "Enter the number of element of stack";
	cin >> n;
	inputStack(s, n);
	outputStack(s);
	cout << "Enter the value wanting to add to the stack: ";
	cin >> x;
	push(s, x);
	outputStack(s);
	pop(s);
	outputStack(s);
	Snode* node = peek(s);
	cout << "val: " << node->key;
	destack(s);
	delete s;
	s = nullptr;
	return 0;
}
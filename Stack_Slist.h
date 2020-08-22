# include<iostream>

using namespace std;
struct Snode
{
	int key=0;
	Snode* pnext;
 };
struct stack
{
	Snode* ptop = nullptr;
};
Snode* newnode(int val);// create new node from a value
void initialize(stack** r_stack);// create Empty stack
bool isEmpty(stack *r_stack);// return true if stack empty
bool push(stack* u_stack, int r_val);//add an element to the front of the stack
void pop(stack* u_stack);// remove the first element from stack
Snode* peek(stack* r_stack);// get the first value of stack
void destack(stack* s);// empty stack

void inputStack(stack* u_stack, int n);
void outputStack(stack* r_stack);
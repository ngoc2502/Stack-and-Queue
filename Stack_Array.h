#include<iostream>
constexpr auto MAX = 100;;
using namespace std;
struct stack
{
	int  a[MAX];
	int Atop;
};
bool isEmpty(stack* r_stack);
bool isFull(stack* r_stack);
void push(stack* u_stack, int r_val);
void inputstack(stack* u_stack, int r_n);
void outputstack(stack* r_stack);
void initialize(stack* r_stack);
void pop(stack* u_stack);
int peek(stack* r_stack);
void deinitialize(stack* s);
#include "Stack_Array.h";
bool isEmpty(stack* s)
{
	if (s->Atop == -1) return true;
	else return false;
}
bool isFull(stack* r_stack)
{
	if (r_stack->Atop == MAX) return true;
	return false;
}
void push(stack* u_stack, int r_val)
{
	if (isFull(u_stack))
	{
		cout << "Stack Over";
		return;
	}
	u_stack->Atop++;
	u_stack->a[u_stack->Atop] = r_val;
	return;
}
void inputstack(stack* u_stack, int r_n)
{
	for (int i = 0; i < r_n; i++)
	{
		int x = 0;
		cout << "Enter value: ";
		cin >> x;
		push(u_stack, x);
	}
	return;
}
void outputstack(stack *r_stack)
{
	for (int i = 0; i < r_stack->Atop+1; i++)
	{
		cout << r_stack->a[i] << "\t";
	}
	cout << "\n";
	return;
}
void initialize(stack* r_stack)
{
	r_stack->Atop = -1;
}
void pop(stack* u_stack)
{
	if (isEmpty(u_stack))
	{
		cout << "stack is empty!\n";
		return;
	}
	u_stack->Atop--;
	return;
}
int peek(stack* r_stack)
{
	return (r_stack->a[r_stack->Atop]);
}
void deinitialize(stack* s)
{
	while (isEmpty(s)==false)
	{
		pop(s);
	}
}
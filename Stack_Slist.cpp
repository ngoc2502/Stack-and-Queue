#include"Stack_Slist.h"

using namespace std;

Snode* newnode(int val)
{
	Snode* node = new Snode;
	if (node == nullptr) return nullptr;
	node->key = val;
	node->pnext = nullptr;
}
void initialize(stack** r_stack)
{
	*r_stack = new stack{ nullptr};
}
bool isEmpty(stack* r_stack)
{
	if (r_stack->ptop == nullptr) return true;
	return false;
}

bool push(stack* u_stack, int r_val)
{
	Snode*n= newnode(r_val);
	if (isEmpty(u_stack))
	{
		u_stack->ptop = n;
		return true;
	}
	n->pnext = u_stack->ptop;
	u_stack->ptop = n;
	return true;
}
void pop(stack* u_stack)
{
	if (isEmpty(u_stack)) return;
	Snode* temp = u_stack->ptop->pnext;
	delete u_stack->ptop;
	u_stack->ptop = temp;
	return ;
}
Snode* peek(stack* r_stack)
{
	return r_stack->ptop;
}
void destack(stack* s)
{
	for (Snode* n = s->ptop; s->ptop != nullptr; n->pnext)
	{
		pop(s);
	}
	return;
}
void inputStack(stack* u_stack,int n)
{
	for (int i=0;i<n;i++)
	{
		int k = 0;
		cout << "Enter the value\n";
		cin >>k ;
		push(u_stack, k);
	}
	return;
}
void outputStack(stack* r_stack)
{
	for (Snode* n = r_stack->ptop; n != nullptr; n = n->pnext)
	{
		cout << n->key << "\t";
	}
	cout << "\n";
	return;
}

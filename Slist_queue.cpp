#include"Slist_queue.h"

bool isEmpty(Queue* r_que)
{
	if (r_que->phead == nullptr)
		return true;
	return false;
}
Snode* newnode(int r_val)
{
	Snode* n = new Snode;
	n->key = r_val;
	n->pnext = nullptr;
	return n;
}
void push(Queue* u_que, int x)
{
	Snode* n = newnode(x);
	if (isEmpty(u_que))
	{
		u_que->phead = u_que->ptail = n;
		return;
	}
	u_que->ptail->pnext = n;
	u_que->ptail = n;
}
void pop(Queue* u_que)
{
	if (isEmpty(u_que)) return;
	Snode* temp = u_que->phead->pnext;
	delete u_que->phead;
	u_que->phead = nullptr;
	u_que->phead = temp;
}
void inputQue(Queue* w_que, int r_n)
{
	for (int i = 0; i < r_n; i++)
	{
		cout << "enter the value: ";
		int x = 0;
		cin >> x;
		push(w_que, x);
	}
}
void outputQue(Queue* r_que)
{
	if (isEmpty(r_que))
	{
		cout << "Empty!\n";
		return;
	}
	Snode* n = r_que->phead;
	while (n != nullptr)
	{
		cout << n->key << "\t";
		n = n->pnext;
	}
	cout << "\n";
}
void emptyQue(Queue* que)
{
	while (isEmpty(que) == false)
	{
		pop(que);
	}
}
void initialize(Queue** que)
{
	*que = new Queue{ nullptr,nullptr };
}
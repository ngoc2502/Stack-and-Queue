#include"Dlist_queue.h"
void initialize(queue ** r_que)
{
	*r_que = new queue{ nullptr, nullptr};
}
bool isEmpty(queue* r_que)
{
	if (r_que->phead == nullptr) return true;
	return false;
}
Dnode* newnode(int r_val)
{
	Dnode* d = new Dnode;
	d->key = r_val;
	d->pnext = nullptr;
	d->pprev = nullptr;
	return d;
}
void pop(queue* u_que)
{
	if (isEmpty(u_que)) return;
	Dnode* d = u_que->phead->pnext;
	delete u_que->phead;
	u_que->phead = d;
}
void push(queue* u_que, int r_x)
{
	Dnode* d = newnode(r_x);
	if (isEmpty(u_que))
	{
		u_que->phead = d;
		u_que->ptail = d;
		return;
	}
	u_que->ptail->pnext = d;
	d->pprev= u_que->ptail;
	u_que->ptail = d;
}
void inputQue(queue* w_que, int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cout << "Enter the value: ";
		cin >> x;
		push(w_que, x);
	}
}
void outputQue(queue* r_que)
{
	if (isEmpty(r_que))
	{
		cout << "Empty!\n";
		return;
	}
	Dnode* n = r_que->phead;
	while (n != nullptr)
	{
		cout << n->key<<"\t";
		n = n->pnext;
	}
	cout << "\n";
}
void deinitialize(queue* de_que)
{
	while (de_que->phead != nullptr)
	{
		pop(de_que);
	}
}
int peek(queue* que)
{
	return(que->phead->key);
}
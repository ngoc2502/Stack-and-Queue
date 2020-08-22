# include <iostream>
using namespace std;

struct Snode
{
	int key;
	Snode* pnext;
};
struct Queue
{
	Snode* phead;
	Snode* ptail;
};
bool isEmpty(Queue* r_que);// return true if queue is empty
Snode* newnode(int r_val);// create new node
void push(Queue* u_que, int x);// add a new value to queue
void pop(Queue* u_que);//remove a value from queue
void inputQue(Queue* w_que, int r_n);
void outputQue(Queue* que);
void emptyQue(Queue* que);// delete queue
void initialize(Queue** que);// create empty queue
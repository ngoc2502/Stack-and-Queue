#include<iostream>
using namespace std;

struct Dnode
{
	int key;
	Dnode* pnext;
	Dnode* pprev;
};
struct queue
{
	Dnode* phead;
	Dnode* ptail;
};
void initialize(queue** r_que);
bool isEmpty(queue* r_que);
Dnode* newnode(int r_val);
void pop(queue* u_que);
void push(queue* u_que, int r_x);
void inputQue(queue* w_que, int n);
void outputQue(queue* r_que);
void deinitialize(queue* de_que);
int peek(queue* que);
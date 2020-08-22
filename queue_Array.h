#include<iostream>//them dau xoa cuoi
using namespace std;
constexpr auto max_size = 100;

struct queue
{
	int data [max_size] ;
	int head ;
	int tail ;
};
bool isEmpty(queue* r_que);// return true if queue is empty
bool isFull(queue* r_que);// return true if queue is full
void enqueue(queue* u_que, int r_val);//add an new element (in the last of queue)
void dequeue(queue* u_que);// delete an element( the first element)
void input_queue(queue* r_que);
void output_queue(queue* r_que);
void initialize(queue* que);// create empty queue 
int  peek_queue(queue* r_queue);// get value of the first element
void emptyQue(queue* u_que);// Empty the queue

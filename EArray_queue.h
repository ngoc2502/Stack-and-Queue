# include <iostream>
constexpr auto MAX = 10;
using namespace std;
struct queue
{
	int data[MAX];
	int head;
	int tail;
};
void initialize(queue* u_que);
bool isEmpty(queue* r_que);
bool isFull(queue* r_que);
void enqueue(queue* u_que, int r_val);
void dequeue(queue* u_que);
void inputque(queue* r_que, int n);
void outputque(queue* r_queue);
void emptyQue(queue* que);

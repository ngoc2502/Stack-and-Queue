#include"queue_Array.h"
// manipulate queue with array

bool isEmpty(queue* r_que)
{
	if (((r_que->head == -1) && (r_que->tail == -1)) || (r_que->head>r_que->tail)) return true;
	return false;
}

void enqueue(queue* u_que, int r_val)// push vao cuoi hang
{
	if (isFull(u_que)) return;
	if (isEmpty(u_que))
	{
		u_que->tail++;
		u_que->head++;
		u_que->data[u_que->head] =u_que->data[u_que->tail] = r_val;
		return;
	}
	u_que->tail++;
	u_que->data[u_que->tail] = r_val;
}
void dequeue(queue* u_que)
{
	if (isEmpty(u_que)) return;
	u_que->data[u_que->head] =0;
	u_que->head++;
}
void input_queue(queue* r_que)
{
	int n = 0;
	cout << "Enter the number of element: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cout << "enter the value: ";
		cin >> x;
		enqueue(r_que,x);
	}
}
void output_queue(queue* r_que)
{
	if (isEmpty(r_que))
	{
		cout << "Empty!\n";
		return;
	}
	for (int i =r_que->head; i < r_que->tail+1; i++)
		cout << r_que->data[i]<<"\t";
	cout << "\n";
}
void initialize(queue* que)
{
	que->data[0] = 0;
	que->head = -1;
	que->tail = -1;
}
int  peek_queue(queue* r_queue)
{
	return (r_queue->data[r_queue->head]);
}
bool isFull(queue* r_que)
{
	if (r_que->tail + 1 == max_size) return true;
	return false;
}
void emptyQue(queue* u_que)
{
	for (int i = u_que->head; i < u_que->tail + 1; i++)
	{
		dequeue(u_que);
	}
}

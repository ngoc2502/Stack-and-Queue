#include "EArray_queue.h";
void initialize(queue* u_que)
{
	u_que->data[0] = 0;
	u_que->head = -1;
	u_que->tail = -1;
}
bool isEmpty(queue* r_que)
{
	if ((r_que->head == r_que->tail) && (r_que->tail == -1)) return true;
	return false;
}
bool isFull(queue* r_que)
{
	if (r_que->tail - r_que->head + 1 == MAX || r_que->head - r_que->tail == 1) return true;
	return false;
}
void enqueue(queue* u_que, int r_val)
{
	if (isFull(u_que)) return;
	if (isEmpty(u_que))
	{
		u_que->head++;
		u_que->tail++;
		u_que->data[u_que->head] = u_que->data[u_que->tail] = r_val;
		return;
	}
	u_que->tail = (u_que->tail + 1) % MAX;
	u_que->data[u_que->tail] = r_val;
}
void dequeue(queue* u_que)
{
	if (isEmpty(u_que)) return;
	if (u_que->head == u_que->tail)
	{
		u_que->tail = -1;
		u_que->head = -1;
		return;
	}
	u_que->data[u_que->head] = 0;
	u_que->head = (u_que->head + 1) % MAX;
}
void inputque(queue* r_que,int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cout << "Enter the value:";
		cin >> x;
		enqueue(r_que, x);
	}
}
void outputque(queue* r_queue)
{
	if (isEmpty(r_queue))
	{
		cout << "Empty!\n";
		return;
	}
	if (r_queue->head <= r_queue->tail)
	{
		for (int i = r_queue->head; i < r_queue->tail+1; i++) cout << r_queue->data[i]<<"\t";
		cout << "\n";
		return;
	}
	for (int i = r_queue->head; i < MAX; i++)
		cout << r_queue->data[i]<<"\t";
	for (int i = 0; i < r_queue->tail; i++)
		cout << r_queue->data[i] << "\t";
	cout << endl;
}
void emptyQue(queue* que)
{
	while (isEmpty(que) == false)
	{
		dequeue(que);
	}
}

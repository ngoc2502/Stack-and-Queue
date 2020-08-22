#include"EArray_queue.h"
//circular queue with array

using namespace std;
int main()
{
	queue* que = new queue;
	int n;
	initialize(que);
	outputque(que);
	do {
		cout << "Enter the num ber of element: ";
		cin >> n;
	} while (n <= 0 || n>MAX);
	inputque(que, n);
	outputque(que);
	cout << "========\n";
	int x = 0;
	cout << "=>Using enqueue function:\n";
	cout << "value wanting to add:";
	cin >> x;
	enqueue(que,x);
	outputque(que);
	cout << "=>Using dequeue function:\n";
	dequeue(que);
	outputque(que);
	
	emptyQue(que);
	if (isEmpty(que)) cout << "Empty!\n";
	else cout << "Not empty!\n";

	delete que;
	que = nullptr;
}
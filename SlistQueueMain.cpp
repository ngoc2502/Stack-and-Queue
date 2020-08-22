#include"Slist_queue.h"
//queue operations with a single linked list

int main()
{
	Queue* que = new Queue;
	int n = 0;
	initialize(&que);
	outputQue(que);
	do {
		cout << "Enter the number of elements: ";
		cin >> n;
	} while (n < 0);
	inputQue(que, n);
	outputQue(que);
	cout << "=>Using push function:\n";
	cout << "Enter the number wanting to add:";
	int x;
	cin >> x;
	push(que, x);
	outputQue(que);
	cout << "=>Using pop function:\n";
	pop(que);
	outputQue(que);
	emptyQue(que);
	outputQue(que);
	return 0;
}
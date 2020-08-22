#include"Dlist_queue.h"
// manipulate queue with double linked list
using namespace std;

int main()
{
	queue* que = new queue;
	int n=0;
	cout << "Create empty queue:\n";
	initialize(&que);
	outputQue(que);

	cout << "Enter the number of element:";
	cin >> n;
	inputQue(que, n);
	outputQue(que);

	cout << "=> Using pop function:\n";
	pop(que);
	outputQue(que);

	cout << "=> Using push function:\n";
	int x = 0;
	cout << "Enter the value wanting to add: ";
	cin >> x;
	push(que, x);
	outputQue(que);

	cout << "=>Empty queue:\n";
	deinitialize(que);
	outputQue(que);
	delete que;
	que = nullptr;
}
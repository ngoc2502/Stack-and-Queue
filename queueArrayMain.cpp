#include"queue_Array.h"
// manipulate queue with array
using namespace std;
int main()
{
	queue* que = new queue;

	initialize(que);
	input_queue(que);
	output_queue(que);
	dequeue(que);
	output_queue(que);
	int n=peek_queue(que);
	cout << n<<"\n";
	cout << "check\n";
	emptyQue(que);
	output_queue(que);
	delete que;
	que = nullptr;
	return 0;
}
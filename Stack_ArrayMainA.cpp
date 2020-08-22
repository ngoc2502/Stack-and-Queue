#include"Stack_Array.h"
// manipulate stack with array
using namespace std;
int main()
{
	stack* s = new stack;
	int n = 0;
	int x = 0;
	initialize(s);
	if (isEmpty(s)) cout << "Empty!\n";
	else cout << "Not empty!\n";

	cout << "The number of elements: ";
	cin >> n;

	inputstack(s, n);
	outputstack(s);
	cout << "The value wanting to add front the list: ";
	cin >> x;
	push(s, x);
	outputstack(s);

	cout << "Pop:\n";
	pop(s);
	outputstack(s);

	cout << "=>The first value is: ";
	int first = peek(s);
	cout << first<<"\n";
	 
	cout << "=> Check if full \n";
	if (isFull(s)) cout << "stack is full\n";
	else cout << "Not full yet!\n";

	cout << "=> Check if empty \n";
	deinitialize(s);
	if (isEmpty(s)) cout << "Empty!\n";
	else cout << "Not empty!\n";

	delete s;
	s = nullptr;
	return 0;
}
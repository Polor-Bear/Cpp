#include"printDeque.h"

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
#include "printSet.h"

void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

void printMultiset(const multiset<int>& ms)
{
	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

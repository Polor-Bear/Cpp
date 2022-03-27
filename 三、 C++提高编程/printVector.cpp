#include "printVector.h"

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

void printVector(vector<bool>& v)
{
	for (vector<bool>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
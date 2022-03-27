#include "printMap.h"

void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it)
		cout << "key = " << (*it).first << "	value = " << it->second << endl;
	cout << endl;
}
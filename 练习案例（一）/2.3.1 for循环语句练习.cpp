//练习案例：敲桌子
//案例描述：从1开始数到数字100，如果数字个位或十位含有7，或者该数字是7的倍数，则打印敲桌子，其余数字直接打印输出

#include<iostream>
using namespace std;

int main231() {

	int a = 0;
	for (int num = 1; num < 101; num++)
	{
		if (num % 10 == 7 || num % 7 == 0 || num / 10 == 7)
		{
			cout << "敲桌子\n";
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}
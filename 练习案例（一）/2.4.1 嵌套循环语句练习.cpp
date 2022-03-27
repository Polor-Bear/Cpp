//练习案例：乘法口诀表
//案例描述：利用嵌套循环，实现九九乘法表

#include<iostream>
using namespace std;

int main241() {

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++) //列数不会大于行数（小于等于）
		{
			cout << j << "*" << i << "=" << j * i << " "; //行数乘以列数
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
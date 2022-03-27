#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值

//利用函数的声明，可以提前告诉编译器函数的存在
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);
int max(int a, int b); //函数声明可以写多次，但是定义只能有一次(一般情况下不会声明多次）

int main66() {
	int a = 10; int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//定义
int max(int a, int b)  //函数定义在main韩
{
	return a > b ? a : b;
}
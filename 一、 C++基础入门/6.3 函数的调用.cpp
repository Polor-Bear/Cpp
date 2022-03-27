#include<iostream>
using namespace std;

//定义加法函数
//函数定义的时候，num1和num2并没有真实的数据，它只是一个形式上的参数，简称形参
int add(int num1, int num2)//（形参列表）
{
	int sum = num1 + num2;
	return sum;
}

int main63() {
	//函数的调用： 使用定义好的函数
	//语法： 函数名（参数）
	//a和b称之为 实际参数，简称实参
	//当调用函数时，实参的值会传递给形参
	//main函数中调用add函数

	int a = 10;
	int b = 20;
	int c = add(a, b);

	cout << "a + b = " << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);

	cout << "a + b = " << c << endl;

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include "swap.h"

//定义函数：实现两个数据进行交换函数

//如果函数不需要返回值，声明的时候可以写void
//void swap(int num1, int num2)
//{
//	cout << "交换前： " << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "交换后： " << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}

int main64() {
	//值传递
	//所谓值传递，就是函数调用时实参将数值传入给形参
	//值传递时，如果形参发生变化，并不会影响实参

	int a = 10; int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl; //值传递时，如果形参发生变化，并不会影响实参

	//总结： 值传递时，形参是改变不了实参的

	system("pause");

	return 0;
}
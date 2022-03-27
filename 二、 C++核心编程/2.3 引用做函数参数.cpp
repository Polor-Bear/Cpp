#include"head.h"

//作用: 函数传参时，可以利用引用的技术让形参修饰实参
//优点: 可以简化指针修改实参

//交换函数

//1、值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

//2、地址传递
void mySwap02(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3、引用传递
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main23() {

	int a = 10;
	int b = 20;

	//mySwap01(a, b); //值传递，形参不会修饰实参
	//mySwap02(&a, &b); //地址传递，形参可以修饰实参
	mySwap03(a, b); //引用传递，形参也可以修饰实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//总结: 通过引用参数产生的效果同按地址传递是一样的，引用的语法更清楚简单

	system("pause");
	return 0;
}
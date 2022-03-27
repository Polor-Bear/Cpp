#include<iostream>
using namespace std;

//值传递
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//地址传递
void swap02(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main77() {

	int a = 10;
	int b = 20;

	swap01(a, b); //值传递不会改变实参

	cout << "swap01a = " << a << endl;
	cout << "swap01b = " << b << endl;

	swap02(&a, &b); //地址传递可以改变实参

	cout << "swap02a = " << a << endl;
	cout << "swap02b = " << b << endl;

	//总结:如果不想修改实参，就用值传递；如果想修改实参，就用地址传递。

	system("pause");

	return 0;
}
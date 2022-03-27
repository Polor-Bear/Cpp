//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<typename T>
//
////利用模板提供通用的交换函数
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//利用模板实现交换
//	//1、自动类型推导
//	mySwap(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c(1.5), d(3.14);
//
//	//2、显示指定类型
//	mySwap<double>(c, d);
//
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结： 
//	//函数模板利用关键字 template
//	//使用函数模板有两种方式：自动类型推导、显示指定类型
//	//模板的目的是为了提高复用性，将类型参数化
//
//	system("pause");
//	return 0;
//}
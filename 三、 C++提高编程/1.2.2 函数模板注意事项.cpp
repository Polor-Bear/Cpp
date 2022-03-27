//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////函数模板的注意事项
//
//template<class T> //typename可以替换成class
//
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1、自动类型推导，必须推导出一致的数据类型T才可以使用
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b); //正确！
//	//mySwap(a, c); //错误！推导出T的数据类型不一致
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2、模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//
//void test02()
//{
//	//func(); //错误，模板不能独立使用，必须确定出T的类型
//	func<int>(); //利用显示指定类型的方式，给T一个类型，才可以使用该模板
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：使用模板时必须确定出通用数据类型T，并且能够推导出一致的类型
//
//	system("pause");
//	return 0;
//}
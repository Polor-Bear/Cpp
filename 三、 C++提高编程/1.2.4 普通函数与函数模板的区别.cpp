//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////普通函数调用时可以发生自动类型转换（隐式类型转换）
////函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
////如果利用显示指定类型的方式，可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////模板函数
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << myAdd01(a, c) << endl;
//
//	//自动类型推导
//	cout << myAdd02(a, b) << endl;
//
//	//显示指定类型
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：建议使用显示指定类型的方式，调用函数模板，因为可以自己确定通用类型T
//
//	system("pause");
//	return 0;
//}
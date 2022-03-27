//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//
//	static int m_A;
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//
//	static int m_A;
//};
//
//int Son::m_A = 50;
//
////同名静态成员属性
//void test01()
//{
//	//1、通过对象访问
//	cout << "通过对象访问: " << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//	//2、通过类名访问
//	cout << "通过类名访问: " << endl;
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	//第一个::代表通过类名的方式访问	第二个::代表访问父类作用域下
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
//
////同名静态成员函数
//void test02()
//{
//	//1、通过对象访问
//	cout << "通过对象访问: " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//2、通过类名访问
//	cout << "通过类名访问: " << endl;
//	Son::func();
//	Son::Base::func();
//
//	//子类出现和父类同名静态成员函数，也会隐藏掉父类中所有同名成员函数
//	//想访问父类中被隐藏的同名成员函数，需要加作用域
//	Son::Base::func(100);
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	//总结：同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象 和 通过类名）
//
//	system("pause");
//	return 0;
//}
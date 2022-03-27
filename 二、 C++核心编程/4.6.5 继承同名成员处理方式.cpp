//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base -- func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base -- func(int a)调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 50;
//	}
//
//	void func()
//	{
//		cout << "Son -- func()调用" << endl;
//	}
//
//	int m_A;
//};
//
////同名成员属性处理
//void test01()
//{
//	Son s;
//
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	//如果通过子类对象，访问到父类中同名成员，需要加作用域
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//}
//
////同名成员函数处理
//void test02()
//{
//	Son s;
//
//	//就近原则
//	s.func(); //直接调用，调用的是子类中的同名成员
//
//	s.Base::func(); //通过子类访问父类中同名函数，也需要加作用域
//
//	//如果子类中出现和父类同名的成员函数，子类同名成员会隐藏掉父类中所有同名成员函数
//	s.Base::func(100); //想访问父类中被隐藏的同名成员函数，需要加作用域
//}
//
//int main() {
//
//	test02();
//
//	//总结
//	//1、子类对象可以直接访问到子类中同名成员
//	//2、子类对象加作用域可以访问到父类同名成员
//	//3、当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
////子类：需要继承Base1和Base2
////语法： class 子类 : 继承方式 父类1 , 继承方式 父类2...
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_B = 300;
//		m_C = 400;
//	}
//
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	Son s;
//	cout << "sizeof Son = " << sizeof(s) << endl;
//	//当父类中出现同名成员，需要加作用域区分
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
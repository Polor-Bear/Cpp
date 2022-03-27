//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	//1、成员函数重载+号
//	Person operator+(const Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//	//函数重载的版本
//	Person operator+(const int &num)
//	{
//		Person temp;
//		temp.m_A = this->m_A + num;
//		temp.m_B = this->m_B + num;
//		return temp;
//	}
//
//	int m_A;
//	int m_B;
//};
//
////全局函数重载+号
////Person operator+(const Person& p1, const Person& p2)
////{
////	Person temp;
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//
//void test01()
//{
//	Person p1{ 10,10 };
//	Person p2{ 20,20 };
//
//	//成员函数重载本质调用
//	//Person p3 = p1.operator+(p2);
//	
//	//全局函数重载本质调用
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//	cout << "p3.m_A = " << p3.m_A << "	p3.m_B = " << p3.m_B << endl;
//
//	//运算符重载也可以发生函数重载
//	Person p4 = p1 + 100; //Person + int
//	cout << "p4.m_A = " << p4.m_A << "	p4.m_B = " << p4.m_B << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	//总结1: 对于内置的数据类型的表达式的运算符是不可能改变的
//	//总结2: 不要滥用运算符重载
//
//	system("pause");
//	return 0;
//}
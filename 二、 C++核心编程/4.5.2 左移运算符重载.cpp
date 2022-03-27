//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, const Person& p);
//
//public:
//	Person(int a, int b) :m_A(a), m_B(b)
//	{
//
//	}
//
//private:
//
//	//利用成员函数重载左移运算符	p.operator(cout)	简化版本 p << cout
//	//不能利用成员函数重载左移运算符，因为无法实现cout在左侧
//
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数实现重载左移运算符
////ostream 对象只能有一个所以返回时要用引用的形式
//ostream& operator<<(ostream& cout, const Person& p)
//{
//	cout << "p.m_A = " << p.m_A << "	p.m_B = " << p.m_B;
//
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 20);
//
//	cout << p << "	Hello World!" << endl; //链式编程思想
//}
//
//
//int main() {
//
//	test01();
//
//	//总结: 重载左移运算符配合友元可以实现输出自定义数据类型
//
//	system("pause");
//	return 0;
//}
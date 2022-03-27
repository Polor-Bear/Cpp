//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////子类继承父类后，当创建子类对象，也会调用父类的构造函数
////问题：父类和子类的构造和析构顺序是谁先谁后？
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数！" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base析构函数！" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数！" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son析构函数！" << endl;
//	}
//};
//
//void test01()
//{
//	//继承中的构造顺序，先构造父类，在构造子类，析构顺序与构造的顺序相反
//	Son s;
//}
//
//int main() {
//
//	test01();
//
//	//总结；继承中先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//
//	system("pause");
//	return 0;
//}
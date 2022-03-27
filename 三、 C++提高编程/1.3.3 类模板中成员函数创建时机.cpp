//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板中成员函数创建时机
////类模板中成员函数在调用时才去创建
//class Person1
//{
//public:
//
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class myClass
//{
//public:
//
//	T obj;
//
//	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成
//	void fun1() { obj.showPerson1(); }
//	void fun2() { obj.showPerson2(); }
//};
//
//void test01()
//{
//	myClass<Person1> m;
//
//	m.fun1();
//	//m.fun2();//编译会出错，说明函数调用才会去创建成员函数
//}
//
//int main() {
//
//	test01();
//
//	//总结：类模板中的成员函数并不是一开始就创建的，在调用时才去创建
//
//	system("pause");
//	return 0;
//}
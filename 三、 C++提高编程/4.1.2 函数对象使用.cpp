//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////函数对象使用 (仿函数)
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////1、函数调用在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 20) << endl;
//}
//
////2、函数对象超出普通函数的概念，函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint() :count(0) {}
//
//	void operator()(const string& test)
//	{
//		cout << test << endl;
//
//		++this->count;
//	}
//
//	int count; //内部自己的状态
//};
//
//void test02()
//{
//	MyPrint myPrint;
//
//	myPrint("Hello World");
//	myPrint("Hello World");
//	myPrint("Hello World");
//	myPrint("Hello World");
//
//	cout << "myPrint调用次数为： " << myPrint.count << endl;
//}
//
////3、函数对象可以作为参数传递
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myPrint;
//
//	doPrint(myPrint, "Hello c++");
//}
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	//总结：仿函数写法非常灵活，可以作为参数进行传递
//
//	system("pause");
//	return 0;
//}
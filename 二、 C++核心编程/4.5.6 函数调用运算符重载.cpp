//#define _CRTSECURE_NO_WARINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////打印输出类
//class MyPrint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//	//重载运算符可以发生函数重载
//	void operator()(int test)
//	{
//		cout << test << endl;
//	}
//};
//
//void MyPrint02(string test)
//{
//	cout << test << endl;
//}
//
////仿函数非常的灵活，没有一个固定的写法
////加法类
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test01()
//{
//	MyPrint myprint;
//
//	myprint("Hello Bug!"); //因为使用起来非常类似于函数调用，因此被称为仿函数
//
//	MyPrint02("Hello Bug!");
//
//	myprint(100);
//}
//
//void test02()
//{
//	MyAdd myadd;
//
//	int ret = myadd(100, 50);
//
//	cout << "ret = " << ret << endl;
//
//	//匿名函数调用
//	//MyAdd()	匿名函数对象
//	cout << "MyAdd()(30,40) = " << MyAdd()(30, 40) << endl;
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}
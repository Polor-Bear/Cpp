//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<deque>
//#include"printDeque.h"
//using namespace std;
//
////deque容器赋值操作
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	
//	// operator= 赋值
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	// assign 赋值
//	deque<int> d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// n个elem
//	deque<int> d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main() {
//
//	test01();
//
//	//总结：deque赋值操作也与vector相同，需熟练掌握
//
//	system("pause");
//	return 0;
//}
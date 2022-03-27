//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<deque>
//#include"printDeque.h"
//using namespace std;
//
////deque容器大小操作
//void test01()
//{
//	deque<int> d1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为： " << d1.size() << endl;
//		//deque容器没有容量概念
//	}
//
//	//重新指定大小
//	//d1.resize(15);
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//deque没有容量的概念
//	//判断是否为空——empty
//	//返回元素个数——size
//	//重新指定个数——resize
//
//	system("pause");
//	return 0;
//}
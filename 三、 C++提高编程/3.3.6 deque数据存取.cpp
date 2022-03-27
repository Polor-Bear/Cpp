//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<deque>
//#include"printDeque.h"
//using namespace std;
//
////deque容器数据存取
//void test01()
//{
//	deque<int>d;
//
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//通过[]方式访问元素
//	// 300 200 100 10 20 30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//通过at方式访问元素
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为： " << d.front() << endl;
//	cout << "最后一个元素为： " << d.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//除了用迭代器获取deque容器中元素，[]和at也可以
//	//front返回容器中第一个元素
//	//back返回容器中最后一个元素
//
//	system("pause");
//	return 0;
//}
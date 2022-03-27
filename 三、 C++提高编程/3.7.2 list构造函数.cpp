//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list容器构造函数
//
//void test01()
//{
//	//创建list容器
//	list<int>L1; //默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//遍历容器
//	printList(L1);
//
//	//区间方式构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main() {
//
//	test01();
//
//	//总结：list构造方式同其他几个STL常用容器，熟练掌握即可
//
//	system("pause");
//	return 0;
//}
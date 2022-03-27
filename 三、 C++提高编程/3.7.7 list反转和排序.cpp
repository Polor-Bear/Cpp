//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//#include<algorithm>
//using namespace std;
//
////list 容器反转和排序
//
//void test01()
//{
//	list<int>L;
//
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(50);
//	L.push_back(40);
//	L.push_back(30);
//
//	cout << "反转前： " << endl;
//	printList(L);
//
//	cout << "反转后： " << endl;
//	L.reverse();
//	printList(L);
//}
//
//bool myCompare(int a, int b)
//{
//	return a > b;
//}
//
////排序
//void test02()
//{
//	list<int>L;
//
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(50);
//	L.push_back(40);
//	L.push_back(30);
//
//	cout << "排序前： " << endl;
//	printList(L);
//
//	//所有不支持随机访问迭代器的容器，不可以使用标准算法
//	//不支持随机访问迭代器的容器，内部会提供对应的一些算法
//	//sort(L.begin(), L.end());
//
//	L.sort();
//	cout << "排序后： " << endl;
//	printList(L);
//
//	//L.sort(); L.reverse();
//	L.sort(myCompare);
//	printList(L);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：
//	//反转——reverse
//	//排序——sort (成员函数)
//
//	system("pause");
//	return 0;
//}
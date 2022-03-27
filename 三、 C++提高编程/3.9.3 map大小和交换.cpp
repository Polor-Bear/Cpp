//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<map>
//#include"printMap.h"
//using namespace std;
//
////map容器 大小和交换
//
////大小
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	if (m.empty())
//		cout << "m为空" << endl;
//	else
//		cout << "m不为空" << endl << "m的大小为： " << m.size() << endl;
//}
//
////交换
//void test02()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(4, 40));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(5, 100));
//	m2.insert(pair<int, int>(6, 200));
//	m2.insert(pair<int, int>(7, 300));
//	m2.insert(pair<int, int>(8, 400));
//
//	cout << "交换前： " << endl;
//	printMap(m1);
//	printMap(m2);
//
//	cout << "交换后： " << endl;
//	m1.swap(m2);
//	printMap(m1);
//	printMap(m2);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：
//	//统计大小——size
//	//判断是否为空——empty
//	//交换容器——swap
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set容器 大小和交换
//
////大小
//void test01()
//{
//	set<int>s;
//
//	//插入数据
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//
//	if (s.empty())
//		cout << "s为空" << endl;
//	else
//		cout << "s不为空" << endl << "s的大小为： " << s.size() << endl;
//
//
//}
//
////交换
//void test02()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	set<int>s2;
//
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//
//	cout << "交换前： " << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "交换后： " << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
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
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set容器 插入和删除
//void test01()
//{
//	set<int>s1;
//
//	//插入
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(10);
//	s1.insert(40);
//
//	//遍历
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//删除重载版本 erase(elem)
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	//s1.clear();
//	s1.erase(s1.begin(), s1.end());
//	printSet(s1);
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//插入——insert
//	//删除——erase
//	//清空——clear
//
//	system("pause");
//	return 0;
//}
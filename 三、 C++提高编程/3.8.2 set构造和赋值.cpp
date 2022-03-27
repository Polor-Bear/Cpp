//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set容器 构造和赋值
//
//void test01()
//{
//	set<int>s1;
//
//	//插入数据	只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//遍历容器
//	//set容器特点：所有元素插入时自动被排序
//	//set容器不允许插入重复值
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//set容器插入数据时用insert
//	//set容器插入的数据会自动排序
//
//	system("pause");
//	return 0;
//}
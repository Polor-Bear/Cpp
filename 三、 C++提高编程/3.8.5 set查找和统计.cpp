//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set容器 查找和统计
//
////查找
//void test01()
//{
//	set<int>s;
//
//	//插入数据
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	set<int>::iterator pos = s.find(30);
//
//	if (pos != s.end())
//		cout << "找到元素： " << *pos << endl;
//	else
//		cout << "未找到元素" << endl;
//}
//
////统计
//void test02()
//{
//	set<int>s;
//
//	//插入数据
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//	s.insert(30);
//	s.insert(30);
//	s.insert(30);
//	s.insert(30);
//
//	//统计30的个数
//	int num = s.count(30);
//	//对于set而言，统计结果无非是 0 或 1
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：
//	//查找——find
//	//统计——count
//
//	system("pause");
//	return 0;
//}
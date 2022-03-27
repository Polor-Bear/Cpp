//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<map>
//#include"printMap.h"
//using namespace std;
//
////map容器 查找和删除
//void test01()
//{
//	//查找
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//		cout << "查到了元素 key = " << (*pos).first << "	value = " << pos->second << endl;
//	else
//		cout << "未找到元素" << endl;
//
//	//统计
//	//map不允许插入重复key元素，count统计对于map而言，结果无非是 0 或 1
//	//multimap的count统计可以大于1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//查找——find(返回的是迭代器)
//	//统计——count(对于map而言，返回结果为0或者1)
//
//	system("pause");
//	return 0;
//}
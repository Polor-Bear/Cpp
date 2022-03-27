//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set容器 和 multiset容器的区别
//void test01()
//{
//	set<int>s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//		cout << "第一次插入成功" << endl;
//	else
//		cout << "第一次插入失败" << endl;
//
//	ret = s.insert(10);
//
//	if (ret.second)
//		cout << "第二次插入成功" << endl;
//	else
//		cout << "第二次插入失败" << endl;
//
//	multiset<int>ms;
//	//允许插入重复值
//	ms.insert(10);
//	ms.insert(30);
//	ms.insert(20);
//	ms.insert(40);
//	ms.insert(10);
//	ms.insert(10);
//
//	printMultiset(ms);
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//如果不允许插入重复数据可以利用set
//	//如果需要插入重复数据利用multiset
//
//	system("pause");
//	return 0;
//}
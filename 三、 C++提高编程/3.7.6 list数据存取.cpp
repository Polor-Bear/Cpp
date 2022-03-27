//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list容器 数据存取
//void test01()
//{
//	list<int>L;
//
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	//cout << L.at(0) << endl; //错误，不支持at方式访问list容器
//	//cout << L[0] << endl; //错误，不支持[]方式访问list容器
//	//原因是list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
//
//	cout << "第一个元素为： " << L.front() << endl;
//	cout << "最后一个元素为： " << L.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L.begin();
//	it++; //支持递增、递减
//	it--;
//	//it = it + 1; //不支持随机访问
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//list容器中不可以通过[]和at方式访问数据
//	//返回第一个元素——front
//	//返回最后一个元素——back
//
//	system("pause");
//	return 0;
//}
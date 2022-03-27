//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list容器插入和删除
//
///*
//push_back(elem);				//在容器尾部加入一个元素
//pop_back();					//删除容器中最后一个元素
//push_front(elem);				//在容器开头插入一个元素
//pop_front();					//从容器开头移除第一个元素
//insert(pos,elem);				//在pos位置插elem元素的拷贝，返回新数据的位置。
//insert(pos,n,elem);			//在pos位置插入n个elem数据，无返回值。
//insert(pos,beg,end);			//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();						//移除容器的所有数据
//erase(beg,end);				//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);					//删除pos位置的数据，返回下一个数据的位置。
//remove(elem);/				/删除容器中所有与elem值匹配的元素。
//*/
//
//void test01()
//{
//	list<int>L;
//
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	// 300 200 100 10 20 30
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	// 300 200 100 10 20
//	printList(L);
//
//	//头删
//	L.pop_front();
//	// 200 100 10 20
//	printList(L);
//
//	//insert 插入
//	L.insert(++L.begin(), 1000);
//	// 200 1000 100 10 20
//	printList(L);
//
//	//erase 删除
//	L.erase(++L.begin());
//	// 200 100 10 20
//	printList(L);
//
//	//remove 移除
//	L.insert(++L.begin(), 5, 20);
//	// 200 20 20 20 20 20 100 10 20
//	printList(L);
//
//	L.remove(20);
//	// 200 100 10
//	printList(L);
//
//	//清空
//	//L.erase(L.begin(), L.end());
//	L.clear();
//	printList(L);
//}
//
//int main() {
//	
//	test01();
//
//	//尾插——push_back
//	//尾删——pop_back
//	//头插——push_front
//	//头删——pop_front
//	//插入——insert
//	//删除——erase
//	//移除——remove
//	//清空——clear
//
//	system("pause");
//	return 0;
//}
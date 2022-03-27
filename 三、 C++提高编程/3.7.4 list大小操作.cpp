//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list容器大小操作
//void test01()
//{
//	list<int>L;
//
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	printList(L);
//
//	//判断容器是否为空
//	if (L.empty())
//		cout << "L为空" << endl;
//	else
//		cout << "L不为空" << endl << "L的元素个数为： " << L.size() << endl;
//
//	//重新指定大小
//	L.resize(10, 10000);
//	printList(L);
//
//	L.resize(2);
//	printList(L);
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//判断是否为空——empty
//	//返回元素个数——size
//	//重新指定大小——resize
//
//	system("pause");
//	return 0;
//}
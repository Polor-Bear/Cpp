//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<deque>
//#include<algorithm>
//#include"printDeque.h"
//using namespace std;
//
////deque容器排序
//void test01()
//{
//	deque<int>d;
//
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	// 300 200 100 10 20 30
//	printDeque(d);
//
//	//排序 默认排序规则 从小到大 升序
//	//对于支持随机访问迭代器的容器，都可以利用sort算法直接对其进行排序
//	//vector容器也可以利用sort进行排序
//	sort(d.begin(), d.end());
//	cout << "排序后： " << endl;
//	printDeque(d);
//}
//
//int main() {
//
//	test01();
//
//	//总结：sort算法非常实用，使用时包含头文件 algorithm即可
//
//	system("pause");
//	return 0;
//}
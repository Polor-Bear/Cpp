//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include"printVector.h"
//using namespace std;
//
////内建函数对象 _关系仿函数
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	printVector(v);
//
//	//降序
//	sort(v.begin(), v.end(), greater<int>());
//	printVector(v);
//}
//
//int main() {
//
//	test01();
//
//	//总结：关系仿函数中最常用的就是greater<>大于
//
//	system("pause");
//	return 0;
//}
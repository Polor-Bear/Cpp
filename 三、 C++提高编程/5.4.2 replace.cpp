//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include"printVector.h"
//using namespace std;
//
////常用拷贝和替换算法 replace
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "替换前： " << endl;
//	printVector(v);
//
//	//将20 替换为 2000
//	cout << "替换后： " << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	printVector(v);
//}
//
//int main() {
//
//	test01();
//
//	//replace会替换区间内满足条件的元素
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
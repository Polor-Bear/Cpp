//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include"printVector.h"
//using namespace std;
//
////常用拷贝和替换算法 swap
//
//void test01()
//{
//	vector<int>v1, v2;
//	for (int i = 0; i < 10; ++i)
//		v1.push_back(i), v2.push_back(i + 100);
//
//	cout << "交换前： " << endl;
//	printVector(v1), printVector(v2);
//
//	vector<int>(v1).swap(v1); //巧用swap收缩内存
//	cout << "---------------------" << endl;
//	cout << "交换后： " << endl;
//	swap(v1, v2);
//	printVector(v1), printVector(v2);
//	cout << v1.capacity() << endl;
//	cout << v2.capacity() << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：swap交换容器时，注意交换的容器要同种类型
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
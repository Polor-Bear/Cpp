//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include"printVector.h"
//using namespace std;
//
////vector赋值
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	//赋值 operator=
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n个elem 方式赋值
//	vector<int> v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main() {
//
//	test01();
//
//	//总结：vector赋值方式比较简单，使用operator=，或者assign都可以
//
//	system("pause");
//	return 0;
//}
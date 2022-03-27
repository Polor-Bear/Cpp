//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include"printVector.h"
//using namespace std;
//
////二元谓词
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//
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
//	sort(v.begin(), v.end());
//	printVector(v);
//
//	cout << "--------------------" << endl;
//	sort(v.begin(), v.end(), MyCompare());
//	printVector(v);
//}
//
//int main() {
//
//	test01();
//
//	//总结：参数值有两个的谓词，称为二元谓词
//
//	system("pause");
//	return 0;
//}
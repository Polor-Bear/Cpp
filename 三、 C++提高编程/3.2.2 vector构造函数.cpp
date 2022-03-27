//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include"printVector.h"
//using namespace std;
//
////vector容器构造
//void test01()
//{
//	vector<int> v1; //默认构造 无参构造
//
//	for (int i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	//通过区间方式进行构造
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem方式构造
//	vector<int> v3(10, 100);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
//int main() {
//
//	test01();
//
//	//总结：vector的多种构造方式没有可比性，灵活运用即可
//
//	system("pause");
//	return 0;
//}
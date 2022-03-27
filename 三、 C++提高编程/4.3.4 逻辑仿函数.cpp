//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include"printVector.h"
//using namespace std;
//
////内建函数对象 _逻辑仿函数
//void test01()
//{
//	vector<bool>v1;
//
//	v1.push_back(true);
//	v1.push_back(false);
//	v1.push_back(true);
//	v1.push_back(false);
//
//	printVector(v1);
//
//	//利用逻辑非，将容器v1搬运到容器v2中，并执行取反操作
//	vector<bool>v2;
//	v2.resize(v1.size()); //一定要提前开辟空间
//	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
//	printVector(v2);
//}
//
//int main() {
//
//	test01();
//
//	//总结：逻辑仿函数实际应用较少，了解即可
//
//	system("pause");
//	return 0;
//}
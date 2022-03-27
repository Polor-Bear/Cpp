//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include"printVector.h">
//using namespace std;
//
////常用拷贝和替换算法 replace_if
//class ReplaceGreater30
//{
//public:
//	bool operator()(const int& val)const
//	{
//		return val >= 30;
//	}
//};
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
//	//将容器中大于等于30 的元素替换成 3000
//	cout << "替换后： " << endl;
//	replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
//	printVector(v);
//}
//
//int main() {
//
//	test01();
//
//	//总结：replace_if按条件替换，可以利用仿函数灵活筛选满足的条件
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
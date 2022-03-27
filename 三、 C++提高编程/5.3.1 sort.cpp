//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
////常用排序算法 sort
//class MyPrint
//{
//public:
//	void operator()(const int& val)const
//	{
//		cout << val << " ";
//	}
//};
//
//void myPrint(const int& val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//利用sort进行升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	//改变为 降序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：sort属于开发中最常用的算法之一，需熟练掌握
//
//	system("pause");
//	return 0;
//}
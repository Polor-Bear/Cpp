//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用遍历算法 for_each
//
////普通函数
//void print01(const int& val)
//{
//	cout << val << " ";
//}
//
////仿函数
//class print02
//{
//public:
//	void operator()(const int& val)const
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i);
//
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：for_each在实际开发中是最常用的遍历算法，需要熟练掌握
//
//	system("pause");
//	return 0;
//}
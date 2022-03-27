//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用排序算法 merge
//class MyPrint
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
//	vector<int>v1, v2;
//	for (int i = 0; i < 10; ++i)
//		v1.push_back(i), v2.push_back(i + 1);
//
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：merge合并的两个序列必须是有序序列
//
//	system("pause");
//	return 0;
//}
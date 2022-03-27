//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用遍历算法 transform
//class Transform
//{
//public:
//	int operator()(int val)
//	{
//		return val + 100;
//	}
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>vSource;
//
//	for (int i = 0; i < 10; ++i)
//		vSource.push_back(i);
//
//	vector<int>vTarget; //目标容器
//	vTarget.resize(vSource.size()); //目标容器需要提前开辟空间
//
//	transform(vSource.begin(), vSource.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：搬运的目标容器必须要提前开辟空间，否则无法正常搬运
//
//	system("pause");
//	return 0;
//}
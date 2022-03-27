//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////仿函数 返回值类型为bool数据类型，称为谓词
////一元谓词
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
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
//	//查找容器中，有没有大于5的数字
//	//GreaterFive() 匿名函数对象
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//		cout << "未找到" << endl;
//	else
//	{
//		cout << "找到了大于5的数字为： ";
//		for (; it != v.end(); ++it)
//			cout << *it << " ";
//		cout << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	//总结：参数只有一个的谓词，称为一元谓词
//
//	system("pause");
//	return 0;
//}
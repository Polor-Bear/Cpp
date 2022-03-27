//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//
////vector容器 数据存取
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//利用[]方式访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//利用at方式访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << ' ';
//	}
//	cout << endl;
//
//	//获取第一个元素
//	cout << "第一个元素为： " << v1.front() << endl;
//
//	//获取最后一个元素
//	cout << "最后一个元素为： " << v1.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//除了用迭代器获取vector容器中元素，[]和at也可以
//	//front返回容器第一个元素
//	//back返回容器最后一个元素
//
//	system("pause");
//	return 0;
//}
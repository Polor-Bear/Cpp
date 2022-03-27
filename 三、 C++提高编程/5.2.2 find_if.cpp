//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////常用查找算法 find_if
//
////1、查找内置数据类型
//class GreaterFive
//{
//public:
//	bool operator()(const int& val)const
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
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//		cout << "没有找到！" << endl;
//	else
//		cout << "找到元素： " << *it << endl;
//}
//
////2、查找自定义数据类型
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	bool operator()(const Person& p)const
//	{
//		return p.m_Age > 20;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//查找年龄大于20的人
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Person());
//
//	if (it == v.end())
//		cout << "没有找到！" << endl;
//	else
//		cout << "找到姓名： " << it->m_Name << "	年龄： " << it->m_Age << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：find_if按条件查找使查找更加灵活，提供的仿函数可以改变不同的策略
//
//	system("pause");
//	return 0;
//}
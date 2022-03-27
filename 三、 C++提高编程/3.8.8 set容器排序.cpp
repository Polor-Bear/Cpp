//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set容器排序
//
//class Person
//{
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	string m_Name;
//	int m_Age;
//};
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//
//	bool operator()(const Person p1, const Person p2)const
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
////存放内置数据类型
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//
//	printSet(s1);
//
//	//指定排序规则为从大到小
//	set<int, MyCompare>s2;
//
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//
//	for (set<int>::iterator it = s2.begin(); it != s2.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//}
//
////存放自定义数据类型
//void test02()
//{
//	//自定义数据类型，都要指定排序规则
//	set<Person, MyCompare>s;
//
//	//创建Person对象
//	Person p1("刘备", 30);
//	Person p2("关羽", 28);
//	Person p3("张飞", 25);
//	Person p4("赵云", 20);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person>::iterator it = s.begin(); it != s.end(); ++it)
//		cout << "姓名： " << it->m_Name << "	年龄： " << it->m_Age << endl;
//}
//
//int main() {
//
//	test01();
//	//test02();
//
//	//总结：
//	//利用仿函数可以指定set容器的排序规则
//	//对于自定义数据类型，set必须指定排序规则才可以插入数据
//
//	system("pause");
//	return 0;
//}
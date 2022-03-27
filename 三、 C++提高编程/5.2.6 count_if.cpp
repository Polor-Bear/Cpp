//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////常用查找算法 count_if
//
////统计内置数据类型
//class Greater20
//{
//public:
//	bool operator()(const int& val)const
//	{
//		return val > 20;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//
//	cout << "大于20的元素个数为： " << num << endl;
//}
//
////统计自定义数据类型
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	string m_Name;
//	int m_Age;
//};
//
//class AgeGreater20
//{
//public:
//	bool operator()(const Person& p)const
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 20);
//	Person p5("曹操", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeGreater20());
//
//	cout << "年龄超过20岁的人数为： " << num << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：按值统计用count，按条件统计用count_if
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////常用查找算法 count
//
////1、统计内置数据类型
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40的元素个数为： " << num << endl;
//}
//
////2、统计自定义数据类型
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	bool operator==(const Person& p)
//	{
//		return this->m_Age == p.m_Age;
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
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//
//	//将人员插入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("诸葛亮", 35);
//
//	int num = count(v.begin(), v.end(), p);
//
//	cout << "和诸葛亮同岁的人数为： " << num << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：统计自定义数据类型的时候，需要配合重载 ==
//
//	system("pause");
//	return 0;
//}
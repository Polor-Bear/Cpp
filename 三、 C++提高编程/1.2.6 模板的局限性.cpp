//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////模板的局限性
////模板的通用性并不是万能的，有些特定数据类型，需要用具体化的方式做特殊实现
//
//class Person
//{
//public:
//
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == this->m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////void test01()
////{
////	int a = 10;
////	int b = 20;
////
////	bool ret = myCompare(a, b);
////
////	if (ret)
////	{
////		cout << "a == b" << endl;
////	}
////	else
////	{
////		cout << "a != b" << endl;
////	}
////}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//
//	bool ret = myCompare(p1, p2);
//
//	if (ret)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：
//	//利用具体化的模板，可以解决自定义类型的通用化
//	//学习模板并不是为了写模板，而是在STL能够运用系统提供的模板
//
//	system("pause");
//	return 0;
//}
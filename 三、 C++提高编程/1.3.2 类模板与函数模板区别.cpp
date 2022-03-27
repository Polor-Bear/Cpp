//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板与函数模板区别
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << "	age: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1、类模板没有自动类型推导使用方法
//void test01()
//{
//	//Person p("孙悟空", 1000); 错误，无法使用自动类型推导
//
//	Person<string, int> p("孙悟空", 1000);//正确，只能用显示指定类型
//	p.showPerson();
//}
//
////2、类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string> p("猪八戒",999);//类模板中的模板参数列表，可以指定默认参数
//	p.showPerson();
//}
//
//int main() {
//
//	test02();
//
//	//总结：
//	//类模板使用只能用显示指定类型方式
//	//类模板中的模板参数列表可以有默认参数
//
//	system("pause");
//	return 0;
//}
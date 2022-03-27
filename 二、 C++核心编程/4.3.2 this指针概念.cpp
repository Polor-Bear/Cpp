//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////this指针的用途
//
//class Person
//{
//public:
//	//1、解决名称冲突
//	Person(int age)
//	{
//		//this指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	//2、返回对象本身用*this
//	Person & PersonAddAge(const Person &p)
//	{
//		this->age += p.age;
//
//		//this是指向对象的指针，那么*this指向的就是这个对象的本体
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	Person p1(10);
//	cout << "p1的年龄为: " << p1.age << endl;
//
//	Person p2(18);
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄为: " << p2.age << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
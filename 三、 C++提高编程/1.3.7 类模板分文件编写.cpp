//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板分文件编写问题以及解决
//
////学习目标：掌握类模板成员函数分文件编写产生的问题以及解决方式
//
////问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//
////第一种解决方式：直接包含源文件
////#include"person.cpp"
//
////第二种解决方式：将.h和.cpp中的内容写到一起，将后缀名改为.hpp，hpp是约定的名称，并不是强制
//#include"person.hpp"
//
//void test01()
//{
//	Person<string, int> p("Jerry", 18);
//	p.showPerson();
//}
//
//int main() {
//
//	test01();
//
//	//总结：主流的解决方法是第二种，将类模板成员函数写在一起，并将后缀名改为.hpp
//
//	system("pause");
//	return 0;
//}
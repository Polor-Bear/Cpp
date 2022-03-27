//#include"head.h"
//
////静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//
////静态成员分为:
//
//class Person {
//public:
//	//静态成员变量
//	
//	//所有对象共享同一份数据
//	//在编译阶段分配内存
//	//类内声明，类外初始化操作
//	static int m_A;
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//
//	//静态成员函数
//
//	//所有对象共享同一个函数
//	//静态成员函数只能访问静态成员变量
//public:
//	static void func() {
//		m_A = 200; //静态成员函数可以访问 静态成员变量
//		m_B = 300;
//		//m_C = 400; //静态成员函数不可以访问 非静态成员变量
//		cout << "static void func调用" << endl;
//		cout << m_A << endl;
//		cout << m_B << endl;
//	}
//	int m_C;
//
//	//静态成员函数也是有访问权限的
//private:
//	static void func2() {
//		cout << "static void func2调用" << endl;
//	}
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void test01() {
//	Person p;
//	//100
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200; 
//
//	//200
//	cout << p.m_A << endl;
//}
//
//void test02() {
//	//静态成员变量，不属于某个特定的对象，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1、通过对象进行访问
//	//Person p;
//	//cout << p.m_A << endl;
//
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl;	类外访问不到私有静态成员变量
//}
//
//void test03() {
//	//1、通过对象访问
//	//Person p;
//	//p.func();
//
//	//2、通过类名访问
//	Person::func();
//	//Person::func2();	类外访问不到私有静态成员函数
//}
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}
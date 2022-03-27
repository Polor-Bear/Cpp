//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base
//{
//public:
//	void func()
//	{
//		m_A = 10; //父类中公共权限成员，到子类中依然是公共权限
//		m_B = 20; //父类中保护权限成员，到子类中依然是保护权限
//		//m_C = 30; //父类中私有权限成员，子类中访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	
//	s1.m_A = 100;
//	//s1.m_B = 200; //到Son1中，m_B依然是保护权限，类外访问不到
//}
//
////保护继承
//class Son2 :protected Base
//{
//public:
//	void func()
//	{
//		m_A = 100; //父类中公共权限成员，到子类中变为保护权限
//		m_B = 200; //父类中保护权限成员，到子类中依然是保护权限
//		//m_C = 300; //父类中私有权限成员，子类访问不到
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//
//	//s2.m_A = 1000; //到Son2中，m_A变为了保护权限，因此类外访问不到
//	//s2.m_B = 2000; //依旧为保护权限，因此类外访问不到
//}
//
////私有继承
//class Son3 :private Base
//{
//public:
//	void func()
//	{
//		m_A = 1000; //父类中公共权限成员，到子类中变为私有权限
//		m_B = 2000; //父类中保护权限成员，到子类中也变为私有权限
//		//m_C = 3000; //父类中私有权限成员，子类中访问不到
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//
//	//m_A = 10000; //到Son3中，m_A变为了私有权限，因此类外访问不到
//	//m_B = 20000; //m_B也变为了私有权限，类外访问不到
//}
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 5000; //到Son3中，m_A变为私有权限，即使是子类依然访问不到
//		//m_B = 5000; //到Son3中，m_B变为私有权限，即使是子类依然访问不到
//	}
//};
//
//int main() {
//
//	test03();
//
//	//总结；继承会将父类中的公共和保护属性继承
//	//而继承方式则会决定继承下来的属性在子类中的权限
//
//	system("pause");
//	return 0;
//}
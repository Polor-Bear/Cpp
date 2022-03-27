//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////动物类
//class Animal
//{
//public:
//	int m_Age;
//};
//
////利用虚继承，解决菱形继承的问题
////继承之前加上关键字 virtual 变为虚继承
////虚继承后 Animal类称为虚基类
////羊类
//class Sheep :virtual public Animal {};
//
////驼类
//class Tuo :virtual public Animal {};
//
////羊驼类
//class SheepTuo :public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
//	//利用虚继承可以解决菱形继承问题
//
//	system("pause");
//	return 0;
//}
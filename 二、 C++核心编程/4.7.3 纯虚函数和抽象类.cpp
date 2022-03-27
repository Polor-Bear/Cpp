//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////纯虚函数和抽象类
//class Base
//{
//public:
//	//纯虚函数
//	//只要有一个纯虚函数，这个类被称为抽象类
//	//抽象类特点：
//	//1、无法实例化对象
//	//2、抽象类的子类,也必须重写父类中的纯虚函数，否则也属于纯虚函数
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	void func()
//	{
//		cout << "func调用" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;  //抽象类无法实例化对象
//	//new Base;//抽象类无法实例化对象
//
//	Son a; //子类必须重写父类中的纯虚函数，否则无法实例化对象
//
//	Base* base = new Son;
//
//	base->func();
//	delete base; //堆区数据记得手动销毁
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
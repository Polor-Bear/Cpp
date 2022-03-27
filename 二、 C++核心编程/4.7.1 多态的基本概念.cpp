//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////多态是C++面向对象三大特性之一**
//
////多态分为两类
//
////静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
////动态多态 : 派生类和虚函数实现运行时多态
//
//
//
////静态多态和动态多态区别：
//
////静态多态的函数地址早绑定 - 编译阶段确定函数地址
////动态多态的函数地址晚绑定 - 运行阶段确定函数地址
//
////动物类
//class Animal
//{
//public:
//	//虚函数  加 virtual 关键字
//	virtual void Speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
////小猫类
//class Cat :public Animal
//{
//public:
//	//重写： 函数返回值类型 函数名称 参数列表 完全相同
//	void Speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////小狗类
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////执行说话的函数
////地址早绑定，在编译阶段确定函数地址
////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//
////动态多态满足条件
////1、有继承关系
////2、子类重写父类虚函数
//
////动态多态的使用
////父类指针或者引用指向子类对象
//
//void DoSpeak(Animal& animal) //Animal& animal = cat;
//{
//	animal.Speak();
//}
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//	Dog dog;
//	DoSpeak(dog);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
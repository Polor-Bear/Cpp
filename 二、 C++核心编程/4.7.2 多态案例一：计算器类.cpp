//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////利用普通实现计算器
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//
//		//如果想扩展新的功能，需要修改源码
//		//在真实开发中，提倡 开闭原则
//		//开闭原则：对扩展进行开放，对修改进行关闭
//	}
//
//	int num1;
//	int num2;
//};
//
////利用多态实现计算器
////多态好处：
////1、组织结构清晰
////2、可读性强
////3、对于前期和后期的扩展以及维护性高
//
////实现计算器抽象类
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int num1;
//	int num2;
//};
//
////加法类计算器
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
//
////减法类计算器
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//
////乘法类计算器
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//
//void test01()
//{
//	Calculator c;
//	
//	c.num1 = 10;
//	c.num2 = 20;
//
//	cout << c.num1 << " + " << c.num2 << " = " << c.getResult("+") << endl;
//	cout << c.num1 << " - " << c.num2 << " = " << c.getResult("-") << endl;
//	cout << c.num1 << " * " << c.num2 << " = " << c.getResult("*") << endl;
//}
//
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//	//加法运算
//	AbstractCalculator* abs = new AddCalculator;
//	abs->num1 = 50;
//	abs->num2 = 30;
//
//	cout << abs->num1 << " + " << abs->num2 << " = " << abs->getResult() << endl;
//	//用完后记得销毁
//	delete abs;
//
//	//减法运算
//	abs = new SubCalculator;
//	abs->num1 = 50;
//	abs->num2 = 30;
//
//	cout << abs->num1 << " - " << abs->num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	//乘法运算
//	abs = new MulCalculator;
//	abs->num1 = 50;
//	abs->num2 = 30;
//
//	cout << abs->num1 << " * " << abs->num2 << " = " << abs->getResult() << endl;
//	delete abs;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	//总结：C++开发提倡利用多态设计程序架构，因为多态优点很多
//
//	system("pause");
//	return 0;
//}
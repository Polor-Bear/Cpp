//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////虚析构和纯虚析构
//
////虚析构语法：
//
////virtual ~类名() {}
//
//
////纯虚析构语法：
//
////virtual ~类名() = 0;
////类名::~类名() {}
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//
//	//纯虚函数
//	virtual void Speak() = 0;
//
//	//利用虚析构，可以解决父类指针释放子类对象时不干净的情况
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用" << endl;
//	//}
//
//	//纯虚析构	需要声明也需要实现
//	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	void Speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//
//	~Cat()
//	{
//		cout << "Cat析构函数调用" << endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//	//父类指针在析构时，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//1、虚析构或者纯虚析构就是用来解决通过父类指针释放子类对象
//	//2、如果子类中没有堆区数据，可以不写虚析构或纯虚析构
//	//3、拥有纯虚析构的函数也属于抽象类
//
//	system("pause");
//	return 0;
//}
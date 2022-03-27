//#include"head.h"
//
////C++类中的成员可以是另一个类的对象，我们称该成员为	对象成员
//
////手机类
//class Phone
//{
//public:
//	Phone(string name) :m_PName(name) {
//		cout << "Phone构造函数！" << endl;
//	}
//	~Phone() {
//		cout << "Phone析构函数！" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//};
//
////人类
//class Person
//{
//public:
//	//Phone m_Phone = pName	(隐式转换法)
//	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
//		cout << "Person构造函数！" << endl;
//	}
//	~Person() {
//		cout << "Person析构函数！" << endl;
//	}
//	void playGame() {
//		cout << m_Name << "使用" << m_Phone.m_PName << "牌手机" << endl;
//	}
//	string m_Name; //姓名
//	Phone m_Phone; //手机
//};
//
////当其它类对象作为本类成员，构造的时候先构造对象成员，再构造自身，析构的顺序与构造相反	(先进后出，迟到早退)
//
//void test01() {
//	Person p("张三", "苹果MAX");
//	p.playGame();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
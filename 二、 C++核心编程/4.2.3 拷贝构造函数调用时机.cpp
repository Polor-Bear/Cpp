//#include"head.h"
//
////C++中拷贝构造函数调用时机通常有三种情况
//
//class Person
//{
//public:
//	//构造函数
//	Person() {
//		m_Age = 0;
//		cout << "无参构造函数！" << endl;
//	}
//	Person(int age) {
//		m_Age = age;
//		cout << "有参构造函数！" << endl;
//	}
//	Person(const Person &t) {
//		cout << "拷贝构造函数！" << endl;
//		m_Age = t.m_Age;
//	}
//	//析构函数
//	~Person() {
//		cout << "析构函数！" << endl;
//	}
//private:
//	int m_Age;
//};
//
////1、使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	Person p1(20);
//	Person p2(p1); //调用拷贝构造函数
//	Person p3 = p1; //调用拷贝构造函数
//
//	Person p4;
//	p4 = p1; //不是调用拷贝构造函数，这是一个赋值操作
//}
//
////2、值传递的方式给函数参数传值
//void doWork1(Person p1){ } //相当于	t423 t1 = t;
//void test02() {
//	Person p;
//	doWork1(p);
//}
//
////3、以值方式返回局部对象
//Person doWork2() {
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03() {
//	Person p(doWork2());
//	cout << (int*)&p << endl;
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
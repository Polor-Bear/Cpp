//#include"head.h"
//
////1、构造函数分类
//// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
//// 按照类型分类分为 普通构造和拷贝构造
//
//class Person
//{
//public:
//	//构造函数
//	Person() {
//		cout << "Person无参构造函数的调用" << endl;
//	}
//	Person(int a) {
//		m_Age = a;
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p) {
//		//将传入的人身上的所有属性，拷贝到我身上
//		m_Age = p.m_Age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	//析构函数
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//private:
//	int m_Age;
//};
//
////调用
//void test01() {
//	//1、括号法(常用)
//	//Person p1;		//无参构造
//	//Person p2(10);	//有参构造
//	//Person p3(p2);	//拷贝构造
//
//	//注意事项1
//	//调用默认构造函数时，不要加()
//	//Person p1(); //编辑器会认为这是一个函数的声明，不会认为是在创建对象
//
//	//2、显示法
//	Person p1 = Person();	//无参构造
//	Person p2 = Person(10);	//有参构造
//	Person p3 = Person(p2);	//拷贝构造
//
//	Person(10); //匿名对象	特点: 当前行执行结束后，系统会立即回收掉匿名对象
//
//	//注意事项2
//	//不要利用拷贝函数，初始化一个匿名对象
//	//Person(p3); //编译器会认为	Person(p3) == Person p3; 对象声明
//
//	//3、隐式转换法
//	Person p4 = 10; //相当于	Person p4 = Person(10); 有参构造
//	Person p5 = p4; //拷贝构造
//
//	//所以	int a = 10  也可以写成  int a(10)  或者  int a = int(10)  其他数据类型同理
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
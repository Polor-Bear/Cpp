//#include"head.h"
//
//class Person
//{
//public:
//	//构造函数
//	Person(int age =10,int height = 160) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "有参构造函数！" << endl;
//	}
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题
//	Person(const Person &p) {
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height; //编译器默认实现就是这行代码	属于浅拷贝
//		//深拷贝操作	在堆区重新开辟一块内存接收拷贝的属性
//		m_Height = new int(*p.m_Height);
//		cout << "拷贝构造函数！" << endl;
//	}
//
//	//析构函数
//	~Person() {
//		//析构代码，将堆区开辟的数据做释放操作
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "析构函数！" << endl;
//	}
//public:
//	int m_Age;
//	int * m_Height;
//};
//
//void test01() {
//	Person p1(18,180);
//	cout << "p1的年龄为: " << p1.m_Age << "  身高为: " << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为: " << p2.m_Age << "  身高为: " << *p2.m_Height << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
//
//	system("pause");
//	return 0;
//}
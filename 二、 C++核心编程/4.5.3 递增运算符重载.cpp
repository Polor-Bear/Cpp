//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符	返回引用是为了一直对一个数据进行递增操作
//	MyInteger& operator++()
//	{
//		//先进行++运算
//		m_Num++;
//
//		//在将自身做返回
//		return *this;
//	}
//
//	//重载后置++运算符
//	//MyInteger operator++(int)	int代表占位参数，可以用于区分前置和后置递增
//	//temp局部变量不可以返回引用
//	MyInteger operator++(int)
//	{
//		//先记录当前结果
//		MyInteger temp = *this;
//		//后做递增操作
//		m_Num++;
//		//最后将记录结果做返回
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////重载<<运算符
//ostream& operator<<(ostream& cout, const MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//
//int main() {
//
//	test02();
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板与继承
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base //错误，必须要知道父类中T的类型，才能继承给子类
//class Son :public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////如果想灵活指定父类中T的类型，子类也需要变为类模板
//template<class T1, class T2>
//class Son2 :public Base<T1>
//{
//public:
//
//	Son2()
//	{
//		cout << "T1的类型为： " << typeid(T1).name() << endl;
//		cout << "T2的类型为： " << typeid(T2).name() << endl;
//	}
//
//	T2 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：如果父类是类模板，子类需要指定出父类中T的数据类型
//
//	system("pause");
//	return 0;
//}
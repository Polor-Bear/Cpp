//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
////利用开发人员命令提示工具查看对象模型
////先跳转到目标文件目录
////查看命令:
////cl /d1 reportSingleClassLayout类名 文件名
//
//void test01()
//{
//	//16
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性，是被编译器给隐藏了，但是确实被继承下去了
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//
//int main() {
//
//	test01();
// 
//	//结论： 父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到
//
//	system("pause");
//	return 0;
//}
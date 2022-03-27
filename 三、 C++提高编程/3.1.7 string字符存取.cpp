//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////string 字符存取
//
//void test01()
//{
//	string str = "hello";
//
//	//1、通过［］访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2」通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//修改单个字符
//	str[0] = 'x';
//	// xello
//	cout << "str = " << str << endl;
//
//	str.at(1) = 'x';
//	// xxllo
//	cout << "str = " << str << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：string字符串中单个字符存取有两种方式，利用［］或 at
//
//	system("pause");
//	return 0;
//}
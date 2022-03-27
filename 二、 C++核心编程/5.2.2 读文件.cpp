//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//class Person
//{
//public:
//
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	//1、包含头文件
//	//2、创建流对象
//	ifstream ifs("person.txt", ios::binary | ios::in);
//
//	//3、打开文件，并检测
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4、读文件
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//
//	cout << "姓名: " << p.m_Name << "  年龄: " << p.m_Age << endl;
//
//	//5、关闭文件
//	ifs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
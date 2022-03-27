//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////字符串查找和替换
//
////1、查找
//void test01()
//{
//	string str1 = "abcdefgde";
//
//	//find
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串，pos = " << pos << endl;
//	}
//
//	//rfind
//	//find从左往右查找	rfind从右往左查找
//
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//}
//
////2、替换
//void test02()
//{
//	string str1 = "abcdefg";
//
//	//从	一号位置起 三个字符 替换为"1111"
//	str1.replace(1, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：
//	//find查找是从左往右，rfind从右往左
//	//find找到字符串后，返回查找到的第一个字符位置，找不到返回-1
//	//replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<map>
//#include"printMap.h"
//using namespace std;
//
////map容器 插入和删除
//void test01()
//{
//	//插入
//	map<int, int>m;
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//	//第二种
//	m.insert(make_pair(2, 20));
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种
//	m[4] = 40;
//
//	//[]不建议使用，用途 可以利用key访问到value
//	//cout << m[5] << endl;
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3); //按照key删除
//	printMap(m);
//
//	//清空
//	//m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//map插入方式很多，记住其一即可
//	//插入——insert
//	//删除——erase
//	//清空——clear
//
//	system("pause");
//	return 0;
//}
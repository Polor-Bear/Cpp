//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include"printVector.h"
//using namespace std;
//
////vector 容量和大小操作
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty()) //为真 代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v2的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15, 100); //利用重载版本，可以指定默认填充值，参数2
//	printVector(v1); //如果重新指定的比原来长了，默认用0填充新的位置
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl; //19
//
//	v1.resize(5);
//	printVector(v1); //如果重新指定的比原来短了，超出部分会被删除掉
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl; //仍是19，容量并不会变小
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//判断是否为空——empty
//	//返回元素个数——size
//	//返回容器容量——capacity
//	//重新指定大小——resize
//
//	system("pause");
//	return 0;
//}
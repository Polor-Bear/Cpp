//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////了解STL中容器、算法、迭代器概念之后，我们利用代码感受STL的魅力
////STL中最常用的容器为Vector，可以理解为数组，下面我们将学习如何向这个容器中插入数据、并遍历这个容器
//
////2.5.1 vector容器存放内置数据类型
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//创建一个vector容器，数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向容器中第一个元素
//	//vector<int>::iterator itEnd = v.end(); //结束迭代器 指向容器中最后一个元素的下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	++itBegin;
//	//}
//
//	////第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种遍历方式  利用STL提供的遍历算法  需包含算法迭代器 algorithm
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
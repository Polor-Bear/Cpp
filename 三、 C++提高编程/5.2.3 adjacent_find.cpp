//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用查找算法 adjacent_find
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//
//	if (pos == v.end())
//		cout << "未找到相邻重复元素" << endl;
//	else
//		cout << "找到相邻重复元素： " << *pos << " " << *(++pos) << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：面试题中如果出现查找相邻重复元素，记得用STL中的adjacent_find算法
//
//	system("pause");
//	return 0;
//}
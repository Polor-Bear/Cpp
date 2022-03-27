//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用集合算法 set_intersection
//void myPrint(const int& val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1, v2, vTarget;
//	for (int i = 0; i < 10; ++i)
//		v1.push_back(i), v2.push_back(i + 5);
//
//	vTarget.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//求交集的两个集合必须是有序序列
//	//目标容器开辟空间需要从两个容器中取小值
//	//set_intersection返回值即是交集中最后一个元素的位置
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
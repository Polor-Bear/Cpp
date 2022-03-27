//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用集合算法 set_union
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
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
// 
//	//总结：
//	//求并集的两个集合必须是有序序列
//	//目标容器开辟空间需要两个容器相加
//	//set_union返回值即是并集中最后一个元素的位置
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
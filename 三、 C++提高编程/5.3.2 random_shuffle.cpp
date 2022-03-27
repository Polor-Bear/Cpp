//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
////常用排序算法 random_shuffle
//void myPrint(const int& val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//	vector<int>v;
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i);
//
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	cout << "打乱后" << endl;
//	//利用洗牌算法打乱顺序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：random_shuffle洗牌算法比较实用，使用时记得加随机数种子
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用拷贝和替换算法 copy
//void myPrint(const int& val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10;)
//		v1.push_back(++i);
//
//	vector<int>v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：使用copy算法在拷贝时，目标容器记得提前开辟空间
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
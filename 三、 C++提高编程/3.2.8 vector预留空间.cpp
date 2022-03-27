//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////vector容器 预留空间
//void test01()
//{
//	vector<int> v;
//
//	//利用reserve预留空间
//	v.reserve(100000);
//
//	int num = 0; //统计开辟次数
//	int* p = NULL;
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//
//		//if (v.size() == v.capacity())
//		if (p != &v[0])
//		{
//			p = &v[0];
//			++num;
//		}
//	}
//
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：如果数据量较大，可以一开始就利用reserve来预留空间
//
//	system("pause");
//	return 0;
//}
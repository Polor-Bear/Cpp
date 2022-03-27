//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////实现通用 对数组进行排序的函数
////规则 从大到小
////算法 选择
////测试 char数组、int数组
//
////交换函数模板
//template<typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////打印数组模板
//template<typename T>
//void myPrint(T Arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << Arr[i];
//	}
//	cout << endl;
//}
//
////排序算法
//template<typename T>
//void mySort(T Arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (Arr[j] > Arr[max])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(Arr[max], Arr[i]);
//		}
//	}
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "dfcbae";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//
//	mySort(charArr, len);
//
//	myPrint(charArr, len);
//}
//
//void test02()
//{
//	//测试int数组
//	int Arr[] = { 5,8,9,4,6,7,3,1,2 };
//	int len = sizeof(Arr) / sizeof(Arr[0]);
//
//	mySort(Arr, len);
//
//	myPrint(Arr, len);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//总结：模板可以提高代码复用，需要熟练掌握
//
//	system("pause");
//	return 0;
//}
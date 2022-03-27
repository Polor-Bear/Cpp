#include<iostream>
using namespace std;

int main76() {
	//利用指针访问数组中的元素

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素： " << arr[0] << endl;

	int * p = arr;//创建一个指针指向数组
	cout << "利用指针访问第一个元素： " << *p << endl;

	p++;//让指针向后偏移四个字节
	cout << "利用指针访问第二个元素： " << *p << endl;

	cout << "利用指针遍历数组: " << endl;
	int * p2 = arr;
	for (; p2 < &arr[sizeof(arr) / sizeof(arr[0])]; p2++)
	{
		cout << *p2 << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}
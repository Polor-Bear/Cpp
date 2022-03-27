#include<iostream>
using namespace std;

int main522() {
	//一维数组
	//一维数组名称的用途：

	//1.可以统计整个数组在内存中的长度
	int arr[]{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的内存空间为： " << sizeof(arr) << endl;
	cout << "每个元素占用的内存空间为： " << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2.可以获取数组在内存中的首地址
	cout << "数组的首地址为： " << arr << endl; //16进制表示
	cout << "数组的首地址为： " << (int)arr << endl; //转换为10进制表示
	cout << "数组中第一个元素的地址为： " << (int)&arr[0] << endl; //访问数组中元素的地址时需加入取址符 &
	cout << "数组中第二个元素的地址为： " << (int)&arr[1] << endl;

	//注意事项：数组名是常量，不可以进行赋值操作
	//arr = 100; //给数组名进行赋值程序会报错

	system("pause");

	return 0;
}
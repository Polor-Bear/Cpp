//案例描述:封装一个函数，利用冒泡排序，实现对整型数组的降序排序

#include<iostream>
using namespace std;

//定义冒泡排序函数
void bubbleSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}

//定义打印数组函数
void PrintArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main41() {

	//创建数组
	int arr[] = { 6,8,3,10,2,9,5,1,4,7 };
	int len = sizeof(arr) / sizeof(arr[0]); //定义数组长度

	//利用函数进行冒泡排序
	bubbleSort(arr, len);

	//利用函数打印排序后的数组
	PrintArray(arr, len);

	system("pause");

	return 0;
}
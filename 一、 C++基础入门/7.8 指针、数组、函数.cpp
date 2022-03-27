#include"bubbleSort.h"
#include"printArray.h"

//案例描述:封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//例如数组:arr[] = {8,6,3,5,4,9,2,7,1,10}

int main78() {

	//1、先创建数组
	int arr[] = { 8,6,3,5,4,9,2,7,1,10 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//2、利用函数，实现冒泡排序
	bubbleSort(arr, len);

	//3、打印排序后的数组
	printArray(arr, len);

	system("pause");

	return 0;
}
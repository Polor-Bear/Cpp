#include"bubbleSort.h"

//冒泡排序函数定义 参数1 数组的首地址 参数2 数组的长度
void bubbleSort(int * arr, int len) //int * arr 可以写成 int arr[]
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j > j + 1的值	交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
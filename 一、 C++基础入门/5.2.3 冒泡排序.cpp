#include<iostream>
using namespace std;

int main523() {
	//冒泡排序
	//作用：最常用的排序算法，对数组内元素进行排序
	//1.比较相邻的元素，如果第一个比第二个打，就交换他们两个
	//2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
	//3.重复以上的步骤，每次比较次数-1，直到不需要比较

	//示例：将数组{4,2,8,0,5,7,1,3,9}进行升序排序
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	int len = sizeof(arr) / sizeof(int); //数组中元素个数

	//数组排序前输出：
	cout << "排序前： ";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//开始冒泡排序
	//总共排序轮数为: 元素个数-1
	for (int i = 0; i < len; i++)
	{
		//内层循环对比 次数：元素个数 - 当前轮数 - 1
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，交换这两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//排序后结果：
	cout << "排序后： ";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}
#include"printArray.h"

//打印数组函数定义
void printArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
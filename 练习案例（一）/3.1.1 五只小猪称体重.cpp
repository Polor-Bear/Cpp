//练习案例：五只小猪称体重
//案例描述：在一个数组中记录了五只小猪的体重
//如：int arr[5] = {300,350,200,400,250};
//找出并打印最重的小猪体重

//思路：先认定一个最大值max，访问数组中的每个元素，若这个元素比我认定的最大值要大，则更行最大值

#include<iostream>
using namespace std;

int main311() {

int arr[] = { 300,350,500,400,250 };
int max = 0; //先认定一个最大值

for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++)
{
	if (arr[i] > max) max = arr[i];
}
cout << "最重的小猪的体重为： " << max << endl;


	system("pause");

	return 0;
}
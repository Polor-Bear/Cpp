#include<iostream>
using namespace std;

int main423() {
	//for循环语句
	//作用：满足循环条件，执行循环语句
	//语法：for(起始表达式;条件表达式;末尾循环体）{循环语句;}
	//输出0~9的数字
	for (int num = 0; num < 10; num++)
	{
		cout << num << endl;
	}
	//注意：for循环表达式中，要用分号进行分隔
	//while;do...while;for都是开发中常用的循环语句，for循环结构比较清晰，所以较为常用

	system("pause");

	return 0;
}
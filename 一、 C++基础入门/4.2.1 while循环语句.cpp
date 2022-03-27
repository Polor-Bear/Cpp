#include<iostream>
using namespace std;

int main421() {
//作用：满足循环条件，执行循环语句
//语法：while(循环条件）{循环语句}
//只要循环条件的结果为真，就执行循环语句

//while循环语句
//在屏幕中打印0 ~ 9这10个数字

int num = 0;

//while中填入循环条件
//注意：在执行循环语句的时候，程序必须提供跳出循环的出口，否则会出现死循环
while (num < 10)
{
	cout << num << endl;
	num++;
}

system("pause");

return 0;
}
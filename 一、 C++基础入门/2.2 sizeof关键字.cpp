#include<iostream>
using namespace std;

int main22() {

//整型：	short	(2)		int		(4)		long	(4)		long long	(8)
//作用：	可以利用sizeof关键字可以统计数据类型所占内存大小
//语法：	sizeof(数据类型 / 变量）

short num1 = 10;
cout << " short 占用内存空间为： " << sizeof(short) << endl;

int num2 = 10;
cout << " int 占用内存空间为： " << sizeof(num2) << endl;

long num3 = 10;
cout << " long 占用内存空间为： " << sizeof(num3) << endl;

long long num4 = 10;
cout << " long long 占用内存空间为： " << sizeof(num4) << endl;

//整型大小比较
// short < int <= long <= long long

system("pause");

return 0;
}
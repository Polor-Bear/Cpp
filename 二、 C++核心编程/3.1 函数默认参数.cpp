#include"head.h"

//函数默认参数
//在C++中，函数的形参列表中的形参是可以有默认值的
//如果我们自己传入数据，就用我们自己的数据，如果没有，那么用默认值
//语法: 返回值类型 函数名 (形参 = 默认值)
int func31(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//int func2(int a = 10, int b, int c) { //错误，如果函数有了默认参数，那么要么这个默认参数在最后一位，要么从这个参数到最后一个参数都要有默认值
//	return a + b + c;
//}

//2、如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数，实现有默认参数，声明就不能有
int func312(int a, int b);

int func312(int a = 10, int b = 10) {
	return a + b;
}

int main31() {

	//cout << func31(10) << endl;
	cout << func312() << endl;

	system("pause");
	return 0;
}
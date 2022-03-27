#include"head.h"

//栈区注意事项: 不要返回局部变量的地址***
//栈区的数据由编译器管理开辟和释放

int * func(int b) //形参数据也会存放在栈区
{
	int a = 10; //局部变量	存放在栈区内，栈区的数据在函数执行完成后自动释放
	return &a; //返回局部变量的地址
}

int main121() {

	//接收func函数的返回值
	int * p = func(1);

	cout << *p << endl; //第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl; //第二次这个数据就不再保留了

	system("pause");
	return 0;
}
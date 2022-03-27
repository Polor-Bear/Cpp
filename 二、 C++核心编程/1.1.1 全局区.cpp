#include"head.h"

//创建全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局变量,全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main111() {

	//全局区

	//全局变量、静态变量、常量


	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "全局区存放: " << endl;

	cout << "全局变量g_a的地址为: " << (int)&g_a << endl;
	cout << "全局变量g_b的地址为: " << (int)&g_b << endl;

	//创建静态变量	在普通变量前加static关键字，属于静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a的地址为: " << (int)&s_a << endl;
	cout << "静态变量s_b的地址为: " << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为: " << (int)&"Hello World" << endl;

	//const修饰的变量
	//const修饰的全局变量，const修饰的局部变量

	cout << "全局常量c_g_a的地址为: " << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为: " << (int)&c_g_b << endl;

	//创建const修饰的局部变量，局部常量
	const int c_l_a = 10; // c-const	g-global	l-local
	const int c_l_b = 10;

	cout << "栈区中存放: " << endl;

	cout << "局部变量a的地址为: " << (int)&a << endl;
	cout << "局部变量b的地址为: " << (int)&b << endl;

	cout << "局部常量c_l_a的地址为: " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为: " << (int)&c_l_b << endl;

	//总结
	//C++中在程序运行前分为全局区和代码区
	//代码区的特点是共享和只读
	//全局区中存放全局变量、静态变量、常量
	//常量区中存放 const修饰的全局变量 和 字符串常量(const修饰的局部变量存放在栈区中)

	system("pause");
	return 0;
}
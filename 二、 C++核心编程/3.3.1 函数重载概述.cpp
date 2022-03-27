#include"head.h"

//函数重载的作用: 函数名可以相同，提高函数复用性

//函数重载的满足条件:
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同，或者个数不同，或者顺序不同 (本质上只要可以区分，没有二义性就可以)
void func() {
	cout << "func()的调用" << endl;
}

void func(int a) {
	cout << "func(int a)的调用" << endl;
}

void func(int a, int b) {
	cout << "func(int a, int b)的调用" << endl;
}

void func(double a) {
	cout << "func(double a)的调用" << endl;
}

void func(int, double) {
	cout << "func(int, double)的调用" << endl;
}

void func(double, int) {
	cout << "func(double, int)的调用" << endl;
}

//注意事项: 函数返回值不可以作为函数重载的条件
//int func(double, int) { //错误: 无法重载仅按返回值类型区分的函数
//	cout << "func(double, int)的调用" << endl;
//}

//由于44行45行48行50行代码都可以调用该函数，在函数调用时存在歧义，所以函数参数或占位参数有默认值时，不可以做为函数重载的条件
//void func(int a = 10, double = 3.14, int =20) {
//	cout << "func(int a = 10, double = 3.14, int =20)的调用" << endl; 
//}

int main331() {

	func();
	func(10);
	func(10, 20);
	func(3.14);
	func(10, 3.14);
	func(3.14,10);
	//func(1, 1.5, 2);

	system("pause");
	return 0;
}
#include"head.h"

//函数重载注意事项
//1、引用作为重载条件
void func(int & a) {
	cout << "func1(int & a)的调用" << endl;
}

void func(const int & a) {
	cout << "func1(const int & a)的调用" << endl;
}

//2、函数重载碰到函数默认参数
void func2(int a,int b =10) {
	cout << "func2(int a, int b = 10)的调用" << endl;
}

void func2(int a) {
	cout << "func2(int a)的调用" << endl;
}

int main332() {

	int a = 10;
	func(a); //调用无const
	func(10); //调用有const

	//func2(10); //碰到默认参数产生歧义，尽量避免(运用函数重载技术时，尽量不要使用默认参数)

	system("pause");
	return 0;
}
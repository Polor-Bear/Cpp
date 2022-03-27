#include"head.h"

//占位参数
//语法: 返回值类型 函数名 (数据类型) {}

//目前阶段的占位参数，我们还无法调用，后面的课程中会用到
//占位参数还可以有默认参数
void func32(int a, int =10) {
	cout << "Hello Bug" << endl;
}

int main32() {

	func32(0); //如果函数的占位参数没有默认参数，则占位参数必须要填补

	system("pause");
	return 0;
}
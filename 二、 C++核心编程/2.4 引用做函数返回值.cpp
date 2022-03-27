#include"head.h"

//引用做函数的返回值
//1、不要返回局部变量的引用
int & test01()
{
	int a = 10; //局部变量是存放在栈区中的
	return a;
}

//2、函数的调用可以作为左值
int & test02()
{
	static int a = 10; //静态变量，存放在全局区，全局区上的数据在程序结束后由系统释放
	return a;
}

int main24() {

	//int &ref1 = test01();

	//cout << "ref1 = " << ref1 << endl; //第一次结果正确，是因为编译器做了保留
	//cout << "ref1 = " << ref1 << endl; //第二次结果错误，是因为a的内存已经被释放

	int &ref2 = test02(); //用引用接收函数

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000; //如果函数的返回值是引用，这个函数调用可以作为左值		左值: 等号左边的值
					 //或者反过来说如果想要将函数作为左值使用，那么函数的返回值必须要是引用

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");
	return 0;
}
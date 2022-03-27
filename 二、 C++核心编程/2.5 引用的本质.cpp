#include"head.h"

//本质: 引用的本质在C++内部实际上是一个指针常量

//例:
void func1(int & ref) //发现是引用，转换为 int * const ref = &a;
{
	ref = 100; //ref是引用，转化为 *ref = 100;
}

int main25() {

	int a = 10;

	int & ref = a; //自动转化为 int * const ref = a;	指针常量指向不可改	也说明为什么引用一旦初始化便不可更改

	ref = 20; //内部发现是ref是引用，自动帮我们转化为 *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func1(a);

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	//结论: C++推荐引用技术，因为语法方便，引用本质是指针常量，但是所用的指针操作编译器都帮我们做了

	system("pause");
	return 0;
}
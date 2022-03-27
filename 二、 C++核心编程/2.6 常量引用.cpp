#include"head.h"

//常量引用
//使用场景: 通常用于修饰形参，防止误操作

void showvalue(const int & val) //const修饰实参变为只读，防止误操作
{
	//val = 1000; 
	cout << "val = " << val << endl;
}

int main26() {

	//int & ref = 10; //引用本身需要一块合法的内存空间，因此这行错误
	const int & ref = 10; //加入const就可以了，编译器自动优化代码，int temp = 10; const int & ref = temp;
	//ref = 20; //错误，常量引用不可修改	
	//由于是编译器自动分配内存空间，我们无法找到该数据的原名，因此只能通过引用来操控这段内存
	//但由于被从const修饰为常量引用，变为只读，因此不可以进行修改操作
	cout << "ref = " << ref << endl;

	int a = 100;
	showvalue(a);

	system("pause");
	return 0;
}
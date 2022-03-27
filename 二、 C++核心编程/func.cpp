#include"func.h"

int * func()
{
	//利用new关键字	可以将数据开辟到堆区
	//指针	本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int * p = new int(10); //new返回的是该数据类型的地址
	return p;
}

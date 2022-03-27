#include<iostream>
using namespace std;

int main75() {
	//const修饰指针有三种情况
	int a = 10;
	int b = 20;
	
	//1、const修饰指针--常量指针
	
	/*const int * p = &a;*/
	int const * p = &a;  //这样写更加容易理解
	
	//特点；指针的指向可以修改，但是指针指向的值不可以修改
	
	//*p = 20;错误
	p = &b;//正确

	cout << "*p = " << *p << endl;
	cout << "p = " << p << endl;

	//2、const修饰常量--指针常量
	
	int * const p2 = &a;

	//特点：指针的指向不可以修改，但是指针指向的值可以修改

	*p2 = 50;//正确
	//p2 = &b;错误

	cout << "*p2 = " << *p2 << endl;
	cout << "p2 = " << p2 << endl;

	//3、const既修饰指针,又修饰常量
	
	int const * const p3 = &a;

	//特点：指针的指向和指针所指向的值都不可以进行修改

	//*p3 = 20;错误
	//p3 = &b;错误

	cout << "*p3 = " << *p3 << endl;//由于在第28行通过指针p2修改了数据a的值，所以这里*p3等于50
	cout << "p3 = " << p3 << endl;

	//技巧：看const右侧紧跟着的是指针还是常量，是指针就是常量指针，是常量就是指针常量

	system("pause");

	return 0;
}
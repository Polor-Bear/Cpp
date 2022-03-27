#include<iostream>
using namespace std;

//运算符作用：用于执行代码的运算

int main31() {

//数字运算符
//作用：用于处理四则运算

//1.加减乘除
int a1 = 10;
int b1 = 3;

cout << "a1 + b1 \t=" << a1 + b1 << endl;
cout << "a1 - b1 \t=" << a1 - b1 << endl;
cout << "a1 * b1 \t=" << a1 * b1 << endl;
cout << "a1 / b1 \t=" << a1 / b1 << endl; //两个整数相除，结果依然为整数，将小数部分去除掉（不是四舍五入）

int a2 = 10;
int b2 = 20;

cout << "a2 / b2 \t=" << a2 / b2 << endl; //结果为0

int a3 = 10;
int b3 = 0;

//cout << "a3 / b3 \t=" << a3 / b3 << endl; //两个数相除，除数不可以为0

//两个小数可以相除
double d1 = 0.5;
double d2 = 0.22;

cout << "d1 / d2 \t=" << d1 / d2 << endl; //运算的结果也可以为小数

										  //2.取模运算
										  //本质：就是求余数

cout << "a1 % b1 \t=" << a1 % b1 << endl;
cout << "a2 % b2 \t=" << a2 % b2 << endl;
//两个数相除，除数不可以为零，所以也做不了取模运算
//cout << "a3 % b3 =\t" << a3 % b3 << endl;

//两个小数不可以做取模运算

//cout << "d1 % d2 \t=" << d1 % d2 << endl;

//总结：只有整型变量可以进行取模运算

//递增递减运算

//前置递增
int a = 10;
++a; //让变量+1
cout << "\ta \t=" << a << endl;

//后置递增

int b = 10;
b++;
cout << "\tb \t=" << b << endl;

//前置和后置的区别
//前置递增：先让变量+1，然后进行表达式运算
int a4 = 10;
int b4 = ++a4 * 10;
cout << "\ta4 \t=" << a4 << endl;
cout << "\tb4 \t=" << b4 << endl;

//后置递增：先进行表达式运算，然后让变量+1
int a5 = 10;
int b5 = a5++ * 10;
cout << "\ta5 \t=" << a5 << endl;
cout << "\tb5 \t=" << b5 << endl;
//递减运算同理

system("pause");

return 0;
}
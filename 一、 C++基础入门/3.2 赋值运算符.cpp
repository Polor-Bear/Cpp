#include<iostream>
using namespace std;

int main32() {

//作用：用于将表达式的值赋给变量
//赋值运算符有以下符号

int a = 10;

// =
a = 100;
cout << "a =" << a << endl;

// +=
a = 10;
a += 2; //a = a + 2
cout << "a =" << a << endl;

// -=
a = 10;
a -= 2; //a = a - 2
cout << "a =" << a << endl;

// *=
a = 10;
a *= 2; //a = a * 2
cout << "a =" << a << endl;

// /=
a = 10;
a /= 2; //a = a / 2
cout << "a =" << a << endl;

// %=
a = 10;
a %= 2; //a = a % 2
cout << "a =" << a << endl;

system("pause");

return 0;
}
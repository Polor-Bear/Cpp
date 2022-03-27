#include<iostream>
using namespace std;

int main34() {
//作用；用于根据表达式的值返回真值或假值

//逻辑运算符 非 !
int a = 10;
int b = 0;
//在C++中，非零的数都为真
cout << !a << endl;
cout << !!a << endl;

//逻辑运算符 与 &&
//要同时满足两项条件才为真
cout << (a&&b) << endl; //只要有一项的值为假，返回结果都为假	一假全假

a = 10;
b = 10;
cout << (a&&b) << endl; //只有两项的值都为真时，返回结果才为真

//逻辑运算符 或 ||
a = 10;
b = 0;
cout << (a || b) << endl;

a = 0;
b = 10;
cout << (a || b) << endl;

a = 10;
b = 10;
cout << (a || b) << endl; //只要有一项的值为真，返回结果都为真	有真即真

a = 0;
b = 0;
cout << (a || b) << endl; //只有两项的值都为假时，返回结果才为假

system("pause");

return 0;
}
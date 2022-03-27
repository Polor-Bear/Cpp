#include<iostream>
using namespace std;

//关键字的作用：关键字是C++中预先保留的单词 （也叫标识符或保留字）
//**在定义变量或者常量的时候，不要用C++中的关键字，否则会产生歧义**
int main15() {

//int int = 10;	错误，第二个int是一个关键字，不可以作为变量的名称

int a = 20;

cout << "a = " << a << endl;

system("pause");

return 0;

}
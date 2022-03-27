#include<iostream>
using namespace std;

int main412(){
//三目运算符作用：通过三目运算符进行简单的判断
//语法：表达式1 ？ 表达式2 ： 表达式3；
/*解释：
如果表达式1的值为真，执行表达式2，并返回表达式2的结果；
如果表达式1的值为假，执行表达式3，并返回表达式3的结果；
*/

//创建三个变量 a b c
//将a和b作比较，将较大的变量的值赋值给变量c

int a = 10;
int b = 20;
int c = 0;

c = a > b ? a : b;

cout << "变量c的值为：" << c << endl;

//在C++中三目运算符返回的是变量，可以继续赋值
a > b ? a : b = 100;
cout << "a =" << a << endl;
cout << "b =" << b << endl;

system("pause");

return 0;
}
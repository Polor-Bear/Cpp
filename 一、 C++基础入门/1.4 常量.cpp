#include<iostream>
using namespace std;

//常量的作用：用于记录程序中不可更改的数据
/*C++定义常量两种方式
1.define 宏常量：#define 常量名 常量值
通常在文件上方定义，表示一个常量
2.const修饰的变量： const 数据类型 常量名 = 常量值
通常在变量定义前加关键字const，修饰该变量为常量，不可修改
*/

//1.define 宏常量
#define Week 7

int main14() {

//Week = 14; //错误，Day是常量，一旦修改就会报错
cout << "一周总共有：" << Week << "天" << endl;

//const修饰的变量
const int Year = 12;
//year = 24; //错误，const修饰的变量也成为常量，一旦修改也会报错

cout << "一年总共有：" << Year << "个月份" << endl;

system("pause");

return 0;
}
#include<iostream>
using namespace std;

int main24() {

//作用：字符型变量用于显示单个字符
//语法：char ch = ‘a’;
//注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号
//注意2：单引号内只能由一个字符，不可以是字符串
//C和C++中字符型变量只占用1个字节。
//字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCll编码放入到存储单元。

//1、字符型变量创建方式
char ch = 'A';
cout << ch << endl;

//2、字符型变量所占内存大小
cout << "char字符型变量所占内存: " << sizeof(char) << endl;

//3、字符型变量常见错误
//char ch2 = "b"; //创建字符型变量时候，要用单引号
//char ch2 = 'abcdef'; //创建字符型变量时，单引号内只能有一个字符

//4、字符型变量对应ASCll编码
// a - 97 b - 98
// A - 65 B - 66
// 0 - 48
// space - 32
cout << (int)ch << endl;

system("pause");

return 0;
}
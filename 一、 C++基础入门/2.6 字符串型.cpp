#include<iostream>
using namespace std;
#include<string>	//用C++风格字符串（string语法)的时候，要包含这个头文件

int main26() {

//1、C风格字符串(字符数组）
/*注意事项：注意要加中括号
等号后面要用双引号 包含起来字符串
*/
char str[] = "Hello World";
cout << str << endl;

//2、C++风格字符串
//注意要包含一个头文件 #include<string>

string str2 = "Hello World";
cout << str2 << endl;

system("pause");

return 0;
}
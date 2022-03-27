#include<iostream>
using namespace std;

int main25() {

//作用：用于表现一些不能显示出来的ASCll字符
//现阶段我们常用的转义字符有：\n  \\  \t

//换行符 \n
cout << "Hello World" << endl;// C++
cout << "Hello World\n";// C语言中没有endl;

						//反斜杠  \\
														 
cout << "\\" << endl;

//水平制表符 \t		作用：可以整齐输出数据

cout << "aaaa\tHello World" << endl;
cout << "aa\tHello World" << endl;
cout << "aaaaaa\tHello World" << endl;
cout << "aaaaaaaa\tHello World" << endl;// 输出8个字符也会自动补足8个字符

system("pause");

return 0;
}
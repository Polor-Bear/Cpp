#include<iostream>
using namespace std;

//作用：C++规定给标识符 （变量、常量） 命名时，有一套自己的规则
/*1.标识符不能是关键字
2.标识符只能由字母、数字、下划线组成
3.第一个字符必须为字母或下划线
4.标识符中字母区分大小写
建议：给标识符命名时，争取做到见名知意的效果，方便自己和他人的阅读
*/
int main16() {

//1.标识符不能是关键字
//int int = 10

//2.标识符只能由字母、数字、下划线构成
int abc = 10;
int _abc = 20;
int _123abc = 30;

//3.第一个字符必须为字母或下划线
//int 123abc = 40;

//4.标识符中字母区分大小写
int aaa = 100;
//cout << AAA << endl;	//AAA 和 aaa不是同一个名称

//建议： 给变量起名的时候，最好能够做到见名知意
int num1 = 10;
int num2 = 20;
int sum = num1 + num2;
cout << sum << endl;

system("pause");

return 0;
}
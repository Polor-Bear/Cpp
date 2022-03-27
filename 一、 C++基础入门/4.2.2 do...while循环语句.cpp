#include<iostream>
using namespace std;

int main422() {
//do...while循环语句
//作用:满足循环条件，执行循环语句
//语法: do{执行语句}while(执行条件);
//注意事项:与while的区别是do...while会先执行一次循环语句，再判断循环条件

//输出0~9的数字
int num = 0;
do
{
	cout << num << endl;
	num++;
} while (num < 10);

system("pause");

return 0;
}
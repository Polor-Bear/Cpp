//练习案例：水仙花数
//案例描述：水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
//例如：1^3 + 5^3 + 3^3 = 153
//请利用do...while语句，求出所有3位数中的水仙花数

#include<iostream>
using namespace std;

int main221() {

	int num = 100;

	do
	{
		int a = num / 100; //获取百位：对数字整除于100
		int b = num / 10 % 10; //获取十位：对数字先整除于10，得到两位数，再取模于10
		int c = num % 10; //获取个位，对数字取模于10
		if (a*a*a + b*b*b + c*c*c == num) //判断水仙花数
		{
			cout << num << endl;
		}
		num++;
	}
	while (num < 1000);

	system("pause");

	return 0;
}
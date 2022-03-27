//练习案例：三只小猪称体重
//案例描述：有三只小猪，请分别输入三只小猪的体重，并且判断哪只小猪最重

//思路：运用三目运算符以及if语句用案例一的思路解决小猪称体重问题

#include<iostream>
using namespace std;

int main13() {
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "请输入小猪A的体重：\n";
	cout << "请输入小猪B的体重：\n";
	cout << "请输入小猪C的体重：\n";
	cin >> num1 >> num2 >> num3;

	cout << "小猪A的体重为：" << num1 << endl;
	cout << "小猪B的体重为：" << num2 << endl;
	cout << "小猪C的体重为：" << num3 << endl;

	if (num1 > num2)
	{
		cout << "小猪" << (num1 > num3 ? "A" : "C") << "最重\n";
	}
	else
	{
		cout << "小猪" << (num2 > num3 ? "B" : "C") << "最重\n";
	}

	//特点：语法较为简洁，但依旧未解决若多只小猪体重相等无法计算的问题

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;

int main431() {
	//break语句
	//作用：用于跳出选择结构或者循环结构
	//break使用的时机：

	//1. 出现在switch条件语句中，作用是终止case并跳出switch
	
	cout << "请选择副本难度\n";
	cout << "普通\n";
	cout << "中等\n";
	cout << "困难\n";

	int select = 0; //创建选择结果的变量

	cin >> select; //等待用户输入

	switch (select)
	{
	case 1:
		cout << "您选择的是普通难度\n";
		break; //退出switch语句
	case 2:
		cout << "您选择的是中等难度\n";
		break;
	case 3:
		cout << "您选择的是困难难度\n";
		break;
	default:
		break;
	}
	
	//2. 出现在循环语句中，作用是跳出当前的循环语句
	
	for (int i = 0; i < 10; i++)
	{
		//添加条件：如果i等于5则退出循环，不再打印
		if (i == 5)
		{
			break; //退出循环
		}
		cout << i << endl;
	}
	
	//3. 出现在嵌套循环中，跳出最近的内层循环语句
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; //退出内层循环
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
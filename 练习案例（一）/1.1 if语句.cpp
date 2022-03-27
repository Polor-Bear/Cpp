//练习案例：三只小猪称体重
//案例描述：有三只小猪，请分别输入三只小猪的体重，并且判断哪只小猪最重

//思路：先比较A与B的重量，若A重于B，则进一步比较A与C，更重的最重；若B重于A，则进一步比较B与C，更重的最重。

#include<iostream>
using namespace std;

int main11() {

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
		if (num1 > num3) //A比B重
		{
			cout << "小猪A最重\n";
		}
		else
		{
			cout << "小猪C最重\n";
		}
	}
	else //B比A重
	{
		if (num2 > num3)
		{
			cout << "小猪B最重\n";
		}
		else
		{
			cout << "小猪C最重\n";
		}
	}

	//特点：若两只小猪重量相同，则无法计算出哪只小猪最重，且语法较为复杂多余计算过多

	system("pause");

	return 0;
}
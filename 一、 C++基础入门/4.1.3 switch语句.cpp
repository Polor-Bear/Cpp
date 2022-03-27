#include<iostream>
using namespace std;

int main413() {
	//switch语句作用：执行多条件分支语句
	/*语法：
	switch(表达式）

	{

	case 结果1:执行语句;break;

	case 结果2:执行语句;break;

	...

	default:执行语句;break;

	}
	*/

	//switch语句
	//给灵脉进行评级
	// 1 ~ 2 人脉
	// 3 ~ 4 地脉
	// 5 ~ 6 天脉
	// 7 ~ 9 神脉

	//1、提示修炼者输入自身灵脉数
	//2、输入灵脉数
	//3、根据修炼者自身灵脉数来提示其灵脉等级

	int score = 0;

	while (1)
	{
		cout << "修炼者，请输入你所拥有的灵脉数\n";
		cin >> score;
		cout << "你拥有" << score << "条灵脉\n";
		switch (score)
		{
		case 1:
		case 2: cout << "你所拥有的灵脉为最低级的人脉\n";
			break;
		case 3:
		case 4: cout << "你所拥有的灵脉为地脉\n";
			break;
		case 5:
		case 6: cout << "你所拥有的灵脉为罕见的天脉\n";
			break;
		case 7:
		case 8: cout << "你所拥有的灵脉竟然是最高级的神脉\n";
			break;
		case 9: cout << "震惊，你所拥有的灵脉是神脉中都是极为罕见的9神脉，今后成就不可限量，必将成为大千世界中巅峰存在\n";
			break;
		default: cout << "而很显然这是不可能的，请重新输入\n";
		}
		if (score < 10 && score > 0)
		{
			break;

		}
	}

	//if 和 switch的区别
	//switch 缺点：判断时只能是整型或者字符型，不可以是一个区间
	//switch 优点：结构清晰，执行效率高

	//注意： case中如果没有break，那么程序会一直向下执行
	//总结： 与if语句相比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

	system("pause");

	return 0;
}
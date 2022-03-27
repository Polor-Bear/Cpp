//案例描述：系统随机生成一个1~100之间的数字
//玩家进行猜测，如果猜错，提示玩家数字过大或国小，如果猜对恭喜玩家胜利，并退出游戏
//扩展：可以限制玩家猜测次数

#include<iostream>
using namespace std;
//包含一个系统时间头文件time
#include<ctime>

int main212() {

	srand((unsigned int)time(NULL)); //添加一个随机数种子
	int num = rand() % 100 + 1; //伪随机数，要加入一个随机数种子
								//cout << num << endl;
	int val = 0;
	for (int chance = 0; chance < 5; chance++) //括号中输入一个真值来无限循环
	{
		cout << "请输入一个1~100之间的数字\n";
		cin >> val;

		if (val > num)
		{
			cout << "您输入的数字过大\n";
		}
		else if (val < num)
		{
			cout << "你输入的数字过小\n";
		}
		else
		{
			cout << "恭喜你猜对了\n";
			break; //bresk语句可以退出无限循环
		}
	}
	cout << "游戏结束\n";

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<string>

int main533() {
	//二维数组应用案例：考试成绩统计
	//案例描述：有三名同学 （张三，李四，王五） ，在一次考试中的成绩分别如下表，请分别输出三名同学的总成绩

	//创建二维数组
	int score[][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int len1 = sizeof(score) / sizeof(score[0]);
	int len2 = sizeof(score[0]) / sizeof(score[0][0]);
	string names[] = { "张三","李四","王五" };

	for (int i = 0; i < len1; i++)
	{
		int sum = 0;
		for (int j = 0; j < len2; j++)
		{
			sum += score[i][j];
			//cout <<  score[i][j] << " ";
		}
		cout << names[i] << "的总分为： " << sum << endl;
	}
	
	system("pause");

	return 0;
}
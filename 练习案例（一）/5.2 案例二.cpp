//案例描述: 设计一个英雄的结构体，包括成员姓名，年龄，性别;
			//创建结构体数组，数组中存放5名英雄，通过冒泡排序的算法
			//将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。

//五名英雄信息如下:

	//{"刘备",23,"男"},
	//{"关羽",22,"男"},
	//{"张飞",20,"男"},
	//{"赵云",21,"男"},
	//{"貂蝉",19,"女"},

#include<iostream>
#include<string>
using namespace std;

struct Hero
{
	string name;
	int age;
	string gender;
};

//定义冒泡排序函数
void bubbleSort(struct Hero * heroArray, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

//定义打印数组函数
void printHero(struct Hero * heroArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "英雄姓名: " << heroArray[i].name << "  年龄: " << heroArray[i].age << "  性别: " << heroArray[i].gender << endl;
	}
}

int main52() {

	Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]); //定义英雄结构体数组长度

	//利用函数将数组中的英雄按照年龄进行升序排序
	bubbleSort(heroArray, len);

	//打印排序后的结果
	printHero(heroArray, len);

	system("pause");

	return 0;
}
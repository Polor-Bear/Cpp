#include<iostream>
#include<string>
using namespace std;

//结构体数组作用:将自定义的结构体放入到数组中方便维护
//语法;struct 结构体名 数组名[元素个数] = { {},{},...{} }

//1、定义结构体
struct Student
{
	string name; //学生姓名
	int age; //学生年龄
	int score; //学生分数
};

int main83() {

	//2、创建结构体数组
	Student stuArray[] =
	{ 
		{"张三",18,100},
		{"李四",19,80},
		{"王五",20,60} 
	};

	//3、给结构体数组中的元素赋值
	stuArray[2] = { "赵六",80,60 };
	//stuArray[2].name = "赵六";
	//stuArray[2].age = 80;
	//stuArray[2].score = 60;

	//4、遍历结构体数组

	for (int i = 0; i < sizeof(stuArray) / sizeof(stuArray[0]); i++)
	{
		cout <<  stuArray[i].name << ": " << "  年龄: " << stuArray[i].age << "  分数: " << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}
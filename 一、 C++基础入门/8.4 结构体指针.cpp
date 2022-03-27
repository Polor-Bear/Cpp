#include<iostream>
#include<string>
using namespace std;

//结构体指针作用:通过指针访问结构体中的成员
//利用操作符->可以通过结构体指针访问结构体属性

//1、定义结构体
struct Student
{
	string name; //学生姓名
	int age; //学生年龄
	int score; //学生分数
};

int main84() {

	//2、创建结构体变量

	Student stuArray[] =
	{
		{"张三",18,100},
		{"李四",19,80}
	};

	//3、通过指针指向结构体变量

	Student * p = stuArray;

	//4、通过指针访问结构体变量中的数据包

	cout << p->name << ": " << "  年龄: " << p->age << "  分数: " << p->score << endl; //通过结构体指针,访问结构体中的属性，需要利用操作符 "->"
	p++;
	cout << (*p).name << ": " << "  年龄: " << (*p).age << "  分数: " << (*p).score << endl; // p-> 等于（*p).

	system("pause");

	return 0;
}
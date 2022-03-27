#include<iostream>
#include<string>
using namespace std;

//结构体定义语法:struct 结构体名 { 结构体成员列表 };
//创建学生数据类型:学生包括 ( 姓名，年龄， 分数 )
//自定义数据类型:一些类型集合组成的一个类型
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3; //结构体变量创建方式3:在定义结构体时顺便创建变量

int main82() {

	//通过学生类型创建具体学生

	//结构体变量创建方式1: struct Student s1
	Student s1; //创建结构体变量时，关键字 struct 可以省略;
	s1.name = "张三"; //给结构体中变量的属性赋值时，通过.访问结构体变量中的属性
	s1.age = 18;
	s1.score = 100;

	cout << "张三: \n" << "\t姓名: " << s1.name << "  年龄: " << s1.age << "  分数: " << s1.score << endl;

	//结构体变量创建方式2: struct Student s2 = {...}
	struct Student s2 = { "李四",19,80 };

	cout << "李四: \n" << "\t姓名: " << s2.name << "  年龄: " << s2.age << "  分数: " << s2.score << endl;

	//结构体变量创建方式3:在定义结构体时顺便创建变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;

	cout << "王五: \n" << "\t姓名: " << s3.name << "  年龄: " << s3.age << "  分数: " << s3.score << endl;

	//总结:
			//1、定义结构体时的关键字时struct 不可省略
			//2、创建结构体变量时，关键字struct可以省略
			//3、结构体变量利用操作符 "." 访问成员

	system("pause");

	return 0;
}
#include<iostream>
#include<string>
using namespace std;

//结构体嵌套结构体作用: 结构体中的成员可以是另一个结构体
//例如; 每个老师辅导一个学生，一个老师的结构体中，记录一个学生的结构体

//定义学生结构体
struct Student
{
	string name; //学生姓名
	int age; //学生年龄
	int score; //学生分数
};

//定义教师结构体
struct Teacher
{
	int id; //教师编号
	string name; //老师姓名
	int age; //老师年龄
	struct Student stu; //辅导的学生
};

int main85() {

	//创建老师
	Teacher t = { 10000,"老王",50,{"小王",20,80} };

	cout << "  教师姓名:  " << t.name
		 << "  教师编号:  " << t.id
		 << "  教师年龄： " << t.age
		 << "\n  老师辅导的学生姓名: " << t.stu.name
		 << "  学生年龄: " << t.stu.age
		 << "  学生分数: " << t.stu.score << endl;

	//总结: 在结构体中可以定义另一个结构体作为成员,用来解决实际问题

	system("pause");

	return 0;
}
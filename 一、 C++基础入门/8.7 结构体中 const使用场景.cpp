#include<iostream>
#include<string>
using namespace std;

//作用:用const来防止误操作

//定义学生结构体
struct Student
{
	string name; //学生姓名
	int age; //学生年龄
	int score; //学生分数
};

 //将函数中的形参改为指针，可以节省内存空间,而且不会复制新的副本出来
void PrintStudent(Student const * p)
{
	//p->age = 150; //加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "姓名: " << p->name << "  年龄: " << p->age << "  分数: " << p-> score << endl;
}

int main87() {

	//创建结构体变量
	Student s = { "张三",15,70 };

	//通过函数打印结构体变量信息
	PrintStudent(&s);

	cout << "主函数中张三年龄为: " << s.age << endl;

	system("pause");

	return 0;
}
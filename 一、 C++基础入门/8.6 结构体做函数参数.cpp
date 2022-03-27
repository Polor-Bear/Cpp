#include<iostream>
#include<string>
using namespace std;

//作用: 将结构体作为参数向函数中传递

//定义学生结构体
struct Student
{
	string name; //学生姓名
	int age; //学生年龄
	int score; //学生分数
};

//传递方式有两种
//1、值传递:
void PrintStudent1(struct Student a)
{
	a.age = 100;
	cout << "子函数1中打印 姓名: " << a.name << " 年龄: " << a.age << " 分数: " << a.score << endl;
}

//2、地址传递:
void PrintStudent2(struct Student * p)
{
	p->age = 200;
	cout << "子函数2中打印 姓名: " << p->name << " 年龄: " << p->age << " 分数: " << p->score << endl;
}

int main86() {

	//将学生传入到一个参数中,打印学生身上的所有信息

	//创建结构体变量
	Student stu = { "张三",20,85 };

	PrintStudent1(stu);
	PrintStudent2(&stu);
	cout << "main函数中打印 姓名: " << stu.name << "  年龄: " << stu.age << "  分数: " << stu.score << endl;

	//总结: 如果不想修改主函数中的数据，就用值传递，反之就用地址传递(下一章会学到，也可以使用const修饰地址传递）

	system("pause");

	return 0;
}
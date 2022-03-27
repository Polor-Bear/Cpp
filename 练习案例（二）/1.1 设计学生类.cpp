#include"heah.h"

//案例描述: 设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示姓名和学号

//设计学生类
class Student
{
public:	//公共权限

	//类中的属性和行为 我们统一成为 成员
	//属性 又称为 成员属性 成员变量
	//行为 又称为 成员函数 成员方法
	//属性
	string m_Name; //姓名
	int m_Id; //学号

	//行为
	//给姓名赋值
	void setName(string name) {
		m_Name = name;
	}

	//给学号赋值
	void setId(int id) {
		m_Id = id;
	}

	//显示姓名和学号
	void showStudent() {
		cout << "姓名: " << m_Name << "	学号: " << m_Id << endl;
	}
};

int main11() {

	//创建一个具体学生	实例化对象
	Student s1;

	//给s1对象进行属性赋值操作
	s1.setName("张三");
	s1.setId(1);
	//显示学生信息
	s1.showStudent();

	Student s2;
	s2.setName("李四");
	s2.setId(2);
	s2.showStudent();

	system("pause");
	return 0;
}
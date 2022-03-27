#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"WorkManager.h"
using namespace std;

void test01()
{
	Workermanager wm;

	int choice = 0;

	while (true)
	{
		wm.ShowMenu();

		cout << "请输入您的选择： " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:  //退出系统
			wm.ExitSystem();
			break;
		case 1:  //添加职工
			wm.Add_Emp();
			break;
		case 2:  //显示职工
			wm.Show_Emp();
			system("pause");
			system("cls");
			break;
		case 3:  //删除职工
			wm.Del_Emp();
			break;
		case 4:  //修改职工
			wm.Mod_Emp();
			break;
		case 5:  //查找职工
			wm.Find_Emp();
			break;
		case 6:  //排序职工
			wm.Sort_Emp();
			break;
		case 7:  //清空文档
			wm.Clean_Emp();
			break;
		default:
			break;
		}
	}
}

//测试代码
void test02()
{

	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->ShowInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->ShowInfo();
	delete worker;
}

int main() {

	test01();

	//test02();

	system("pause");
	return 0;
}
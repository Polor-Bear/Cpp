#pragma once
#include<iostream>
#include<string>
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
#include<fstream>
#define FILENAME "EmpFile.txt"
using namespace std;

class Workermanager
{
public:

	//构造函数
	Workermanager();

	//展示菜单
	void ShowMenu();

	//退出系统
	void ExitSystem();

	//记录文件中的人数个数
	int m_EmpNum;

	//记录员工数组的指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void Save();

	//判断文件是否为空的标志
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//按照职工编号判断该职工是否存在，若存在返回职工在数组中的位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_Emp();

	//析构函数
	~Workermanager();
};
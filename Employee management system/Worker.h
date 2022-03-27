#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工接口
class Worker
{
public:

	//展示职工信息
	virtual void ShowInfo() = 0;

	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptId;
};
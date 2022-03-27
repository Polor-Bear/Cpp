#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;

//普通职工类
class Employee :public Worker
{
public:

	//构造函数
	Employee(int Id, string name, int DeptId);

	//展示职工信息
	virtual void ShowInfo();

};
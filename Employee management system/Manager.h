#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;

//经理类
class Manager :public Worker
{
public:

	//构造函数
	Manager(int Id, string name, int DeptId);

	//展示职工信息
	virtual void ShowInfo();

};
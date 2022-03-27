#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;

//老板类
class Boss :public Worker
{
public:

	//构造函数
	Boss(int Id, string name, int DeptId);

	//展示职工信息
	virtual void ShowInfo();

};
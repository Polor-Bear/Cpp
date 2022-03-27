#include "Boss.h"

//老板构造函数
Boss::Boss(int Id, string name, int DeptId)
{
	this->m_Id = Id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

//展示职工信息
void Boss::ShowInfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t职工姓名： " << this->m_Name
		<< "\t岗位： " << "总裁"
		<< "\t岗位职责： 管理公司所有事务" << endl;
}
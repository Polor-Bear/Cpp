#include "Manager.h"

//构造函数
Manager::Manager(int Id, string name, int DeptId)
{
	this->m_Id = Id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

//展示职工信息
void Manager::ShowInfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t职工姓名： " << this->m_Name
		<< "\t岗位： " << "经理"
		<< "\t岗位职责： 完成老板交给的任务，并下发任务给员工" << endl;
}
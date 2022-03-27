#include "Employee.h"

//普通职工构造函数
Employee::Employee(int Id, string name, int DeptId)
{
	this->m_Id = Id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

//展示职工信息
void Employee::ShowInfo()
{
	cout << "职工编号： " << this->m_Id
		 << "\t职工姓名： " << this->m_Name
		 << "\t岗位： " << "员工"
		 << "\t岗位职责： 完成经理交给的任务" << endl;
}
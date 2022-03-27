#include"findPerson.h"

//定义查找指定联系人信息的函数
void findPerson(struct Addressbook * p)
{
	cout << "请输入要查找的联系人: " << endl;
	string name;
	cin >> name;

	//ret == -1  未查到
	//ret != -1  查到了
	int ret = isExist(p, name);

	if (ret != -1)
	{
		cout << "姓名:  " << p->personArray[ret].m_Name << "\t";
		cout << "性别:  " << (p->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄:  " << p->personArray[ret].m_Age << "\t";
		cout << "电话:  " << p->personArray[ret].m_Phone << "\t";
		cout << "住址:  " << p->personArray[ret].m_Address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	//按任意键后清空屏幕，返回上一级
	system("pause");
	system("cls");
}
#include"showPerson.h"

//定义显示联系人函数
void showPerson(struct Addressbook * p)
{
	//判断通讯录中人数是否为0,如果为0，提示记录为空
	if (p->m_Size == 0)
	{
		cout << "当前联系人为空，请添加联系人后再进行访问" << endl;
	}
	else
	{
		for (int i = 0; i < p->m_Size; i++)
		{
			cout << "姓名:  " << p->personArray[i].m_Name << "\t";
			cout << "性别:  " << (p->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄:  " << p->personArray[i].m_Age << "\t";
			cout << "电话:  " << p->personArray[i].m_Phone << "\t";
			cout << "住址:  " << p->personArray[i].m_Address << endl;
		}
	}

	//按任意键后清空屏幕，返回上一级
	system("pause");
	system("cls");
}
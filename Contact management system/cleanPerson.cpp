#include"cleanPerson.h"

//定义清空联系人函数
void cleanPerson(struct Addressbook * p)
{
	int sel;

	cout << "是否确认清空联系人？" << endl;
	cout << "1 --- 是" << endl;
	cout << "2 --- 否" << endl;

SEL:

	cin >> sel;

	if (sel == 1)
	{
		p->m_Size = 0;
		cout << "通讯录已清空" << endl; //将当前记录联系人数量重置为零，做逻辑清空操作
	}
	else if (sel == 2)
	{
		system("cls");
		return;
	}
	else
	{
		cout << "输入有误，请重新输入" << endl;
		goto SEL;
	}
	system("pause");
	system("cls");
}
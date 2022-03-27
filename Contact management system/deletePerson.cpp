#include"deletePerson.h"

//定义删除联系人函数
void deletePerson(struct Addressbook * p)
{
	cout << "请输入要删除的联系人: " << endl;
	string name;
	cin >> name;

	//ret == -1  未查到
	//ret != -1  查到了
	int ret = isExist(p, name);

	if (ret != -1)
	{
		//若查找到该联系人，进行删除操作
		for (int i = ret; i < p->m_Size; i++)
		{
			//数据前移，覆盖要删除的联系人
			p->personArray[i] = p->personArray[i + 1];
		}
		cout << "删除成功!" << endl;
		p->m_Size--; //删除后更新通讯录中人员数量
	}
	else
	{
		cout << "查无此人" << endl;
	}

	//按任意键后清空屏幕，返回上一级
	system("pause");
	system("cls");
}
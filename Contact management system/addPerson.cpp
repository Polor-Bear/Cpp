#include"addPerson.h"

//定义添加联系人函数
void addPerson(struct Addressbook * p)
{
	//先判断通讯录是否已满，如果已满就不再添加
	if (p->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		string name;//姓名
		cout << "请输入姓名: " << name << endl;
		cin >> name;
		p->personArray[p->m_Size].m_Name = name;

		int sex = 0;//性别
		cout << "请输入性别: " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;

	SEX:

		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			p->personArray[p->m_Size].m_Sex = sex;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto SEX;
		}

		int age = 0;//年龄
		cout << "请输入年龄: " << endl;

	AGE:

		cin >> age;
		if (age > 0 && age <= 150)
		{
			p->personArray[p->m_Size].m_Age = age;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto AGE;
		}

		string phone;//电话
		cout << "请输入联系电话: " << endl;
		cin >> phone;
		p->personArray[p->m_Size].m_Phone = phone;

		string address;//住址
		cout << "请输入家庭住址: " << endl;
		cin >> address;
		p->personArray[p->m_Size].m_Address = address;

		//更新通讯录人数
		p->m_Size++;

		//提示用户添加成功
		cout << "添加成功!" << endl;

		system("pause"); //按任意键继续
		system("cls"); //清屏操作
	}
}

void save(Addressbook* p)
{
	ofstream ofs(FILENAME, ios::out);

	ofs << p->personArray[p->m_Size].m_Name << " "
		<< p->personArray[p->m_Size].m_Sex << " "
		<< p->personArray[p->m_Size].m_Age << " "
		<< p->personArray[p->m_Size].m_Phone << " "
		<< p->personArray[p->m_Size].m_Address << endl;

	ofs.close();
}
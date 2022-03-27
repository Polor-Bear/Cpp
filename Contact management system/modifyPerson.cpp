#include"modifyPerson.h"
#include"isExist.h"

//定义修改联系人函数
void modifyPerson(struct Addressbook * p)
{
	cout << "请输入要修改的联系人: " << endl;
	string name;
	cin >> name;

	//ret == -1  未查到
	//ret != -1  查到了
	int ret = isExist(p, name);

	if (ret != -1)
	{
		//若查找到该联系人，进行修改操作
		//先提示用户，是否修改该项数据，用户选择确认则修改，否则跳转到下一项数据

		int sel;

	SNAME:

		cout << "是否修改该联系人姓名" << endl;
		cout << "1 --- 是" << endl;
		cout << "2 --- 否" << endl;

	SNAME1:

		cin >> sel;

		if (sel == 1)
		{
			string name;//姓名
			cout << "请输入新的姓名: " << name << endl;
			cin >> name;
			p->personArray[ret].m_Name = name;
		}
		else if (sel == 2)
		{
			goto SSEX;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto SNAME1;
		}

	SSEX:

		cout << "是否修改该联系人性别" << endl;
		cout << "1 --- 是" << endl;
		cout << "2 --- 否" << endl;

	SSEX1:

		cin >> sel;

		if (sel == 1)
		{
			int sex = 0;//性别
			cout << "请输入新的性别: " << endl;
			cout << "1 --- 男" << endl;
			cout << "2 --- 女" << endl;

		SEX:

			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->personArray[ret].m_Sex = sex;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
				goto SEX;
			}
		}
		else if (sel == 2)
		{
			goto SAGE;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto SSEX1;
		}

	SAGE:

		cout << "是否修改该联系人年龄" << endl;
		cout << "1 --- 是" << endl;
		cout << "2 --- 否" << endl;

	SAGE1:

		cin >> sel;

		if (sel == 1)
		{
			int age = 0;//年龄
			cout << "请输入新的年龄: " << endl;

		AGE:

			cin >> age;
			if (age > 0 && age <= 150)
			{
				p->personArray[ret].m_Age = age;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
				goto AGE;
			}
		}
		else if (sel == 2)
		{
			goto SPHONE;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto SAGE1;
		}

	SPHONE:

		cout << "是否修改该联系人电话" << endl;
		cout << "1 --- 是" << endl;
		cout << "2 --- 否" << endl;

	SPHONE1:

		cin >> sel;

		if (sel == 1)
		{
			string phone;//电话
			cout << "请输入新的联系电话: " << endl;
			cin >> phone;
			p->personArray[ret].m_Phone = phone;
		}
		else if (sel == 2)
		{
			goto SADDRESS;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto SPHONE1;
		}

	SADDRESS:
		
		cout << "是否修改该联系人住址" << endl;
		cout << "1 --- 是" << endl;
		cout << "2 --- 否" << endl;

	SADDRESS1:

		cin >> sel;

		if (sel == 1)
		{
			string address;//住址
			cout << "请输入新的家庭住址: " << endl;
			cin >> address;
			p->personArray[ret].m_Address = address;
		}
		else if (sel == 2)
		{
			goto END;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			goto SADDRESS1;
		}

	END:

		//提示用户修改成功
		cout << "修改成功!" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	//按任意键后清空屏幕，返回上一级
	system("pause");
	system("cls");
}
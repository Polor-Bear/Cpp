#include "WorkManager.h"

//构造函数
Workermanager::Workermanager()
{
	m_EmpNum = 0;
	m_EmpArray = NULL;

	ifstream ifs(FILENAME, ios::in);

	//1、文件不存在
	if (!ifs.is_open())
	{
		this->m_EmpNum = 0; //初始化人数
		this->m_FileIsEmpty = true; //判断标志为空
		this->m_EmpArray = NULL; //初始化数组
		ifs.close(); //关闭文件
		return;
	}

	//2、文件存在，数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	int num = this->get_EmpNum(); //记录文件中职工人数
	this->m_EmpNum = num; //更新成员属性

	//根据职工数创建数组
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//初始化职工
	this->init_Emp();
}

//展示菜单
void Workermanager::ShowMenu()
{
	cout << "*********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！  **********" << endl;
	cout << "*************  0、退出管理程序  *************" << endl;
	cout << "*************  1、增加职工信息  *************" << endl;
	cout << "*************  2、显示职工信息  *************" << endl;
	cout << "*************  3、删除离职职工  *************" << endl;
	cout << "*************  4、修改职工信息  *************" << endl;
	cout << "*************  5、查找职工信息  *************" << endl;
	cout << "*************  6、按照编号排序  *************" << endl;
	cout << "*************  7、清空所有文档  *************" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

//退出系统
void Workermanager::ExitSystem()
{
	system("pause");
	exit(0);
}

//添加职工
void Workermanager::Add_Emp()
{
	
	cout << "请输入增加职工数量： " << endl;

	int AddNum = 0;
	cin >> AddNum;

	if (AddNum > 0)
	{
		//计算新空间大小
		int NewSize = m_EmpNum + AddNum;

		//开辟新空间
		Worker** NewSpace = new Worker * [NewSize];

		//将原空间下内容存放到新空间下
		if (this->m_EmpNum != 0)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				NewSpace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < AddNum; i++)
		{
			int id = 0;
			string name = "";
			int dSelect = 0;

			cout << "请输入第 " << i + 1 << "个新职工编号" << endl;

			while (true)
			{
				cin >> id;
				int ret = this->IsExist(id);
				
				if (ret == -1)
				{
					break;
				}

				cout << "该职工编号已存在，请重新输入： " << endl;
			}

			cout << "请输入第 " << i + 1 << "个新职工姓名" << endl;
			cin >> name;

			cout << "请选择该职工的岗位：" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			NewSpace[this->m_EmpNum + i] = worker;

		}
		//释放原有空间
		delete[] this->m_EmpArray;

		//更新新空间的指向
		this->m_EmpArray = NewSpace;

		//更新人数个数
		this->m_EmpNum = NewSize;

		//保存文件
		this->Save();

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示信息
		cout << "成功添加" << "名员工" << endl;	
	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}

//保存文件
void Workermanager::Save()
{
	ofstream ofs(FILENAME,ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}

//统计人数
int Workermanager::get_EmpNum()
{
	ifstream ifs(FILENAME, ios::in);

	int id;
	string name;
	int Did;

	int num = 0;

	//将文件内信息导入
	while (ifs >> id && ifs >> name && ifs >> Did)
	{
		//记录人数
		num++;
	}

	ifs.close();

	return num;
}

//初始化员工
void Workermanager::init_Emp()
{
	ifstream ifs(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		//根据不同的部门ID创建不同对象
		switch (dId)
		{
		case 1: //1、普通职工
			worker = new Employee(id, name, dId);
			break;
		case 2: //2、经理
			worker = new Manager(id, name, dId);
			break;
		case 3: //3、总裁
			worker = new Boss(id, name, dId);
			break;
		default:
			break;
		}

		//存放在数组中
		this->m_EmpArray[index] = worker;

		index++;
	}
}

//显示职工
void Workermanager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//利用多态调用接口
			this->m_EmpArray[i]->ShowInfo();
		}
	}
}
//删除职工
void Workermanager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		//按职工编号删除
		cout << "请输入要删除的职工编号： " << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1) //说明indexe位置上数据需要删除
		{
			cout << "查找到该职工信息为： " << endl;
			this->m_EmpArray[index]->ShowInfo();

			cout << "是否删除该职工？" << endl;
			cout << "1、是" << endl;
			cout << "2、否" << endl;

			char select = '0';
			cin >> select;

			if (select == '1')
			{
				for (int i = index; i < this->m_EmpNum - 1; i++)
				{
					this->m_EmpArray[i] = this->m_EmpArray[i + 1];
				}

				this->m_EmpNum--;

				this->Save(); //删除后同步到文件中
				cout << "删除成功！" << endl;
			}
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}
	}

	system("pause");
	system("cls");
}

//按照职工编号判断该职工是否存在，若存在返回职工在数组中的位置，不存在返回-1
int Workermanager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;

			break;
		}
	}

	return index;
}

//修改职工
void Workermanager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "全部职工信息如下： " << endl;

		this->Show_Emp();

		cout << endl;
		cout << "请选择修改职工的编号： " << endl;
		int id = 0;
		cin >> id;

		int ret = this->IsExist(id);

		if (ret != -1)
		{
			cout << "查找到该职工信息为： " << endl;
			this->m_EmpArray[ret]->ShowInfo();

			char select = '0';

			while (select)
			{
				cout << "请选择要修改的职工属性： (输入其它选项则退出修改)" << endl;
				cout << "1、职工编号" << endl;
				cout << "2、职工姓名" << endl;
				cout << "3、职工岗位" << endl;
				cin >> select;

				if (select == '1')
				{
					cout << "请输入新职工编号： " << endl;
					int newId = 0;

					while (true)
					{
						cin >> newId;
						int ret = this->IsExist(newId);

						if (ret == -1)
						{
							break;
						}

						cout << "该职工编号已存在，请重新输入： " << endl;
					}

					this->m_EmpArray[ret]->m_Id = newId;

					cout << "修改成功！" << endl;
				}
				else if (select == '2')
				{
					cout << "请输入新职工姓名： " << endl;
					string newName = "";
					cin >> newName;

					this->m_EmpArray[ret]->m_Name = newName;

					cout << "修改成功！" << endl;
				}
				else if (select == '3')
				{
					int oldId = this->m_EmpArray[ret]->m_Id;
					string oldName = this->m_EmpArray[ret]->m_Name;

					delete this->m_EmpArray[ret];

					cout << "请输入新职工岗位： " << endl;
					cout << "1、普通职工" << endl;
					cout << "2、经理" << endl;
					cout << "3、老板" << endl;
					int dSelect = 0;
					cin >> dSelect;

					Worker* worker = NULL;

					switch (dSelect)
					{
					case 1:
						worker = new Employee(oldId, oldName, dSelect);
						break;
					case 2:
						worker = new Manager(oldId, oldName, dSelect);
						break;
					case 3:
						worker = new Boss(oldId, oldName, dSelect);
						break;
					default:
						break;
					}

					this->m_EmpArray[ret] = worker;

					cout << "修改成功！" << endl;
				}
				else
				{
					break;
				}

				system("pause");
			}
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}

	this->Save();

	system("pause");
	system("cls");
}

//查找职工
void Workermanager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入查找的方式： " << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按姓名查找" << endl;

		char select = '0';
		cin >> select;

		if (select == '1')
		{
			int id = 0;
			cout << "请输入要查找的职工编号： " << endl;
			cin >> id;

			int ret = this->IsExist(id);

			if (ret != -1)
			{
				cout << "查找成功，该职工信息如下： " << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == '2')
		{
			cout << "请输入要查找的职工姓名： " << endl;
			string name = "";
			cin >> name;

			bool Flag = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为： "
						<< this->m_EmpArray[i]->m_Id
						<< "号的信息如下： " << endl;

					Flag = true;

					this->m_EmpArray[i]->ShowInfo();

				}
			}
			if (Flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
	}

	system("pause");
	system("cls");
}

//排序职工
void Workermanager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请选择排序方式： " << endl;
		cout << "1、按职工编号升序" << endl;
		cout << "2、按岗位进行排序" << endl;
		char select = '0';
		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int min = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == '1') //按职工编号升序
				{
					if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[min]->m_Id)
					{
						min = j;
					}
				}
				else if (select == '2')
				{
					if (this->m_EmpArray[j]->m_DeptId > this->m_EmpArray[min]->m_DeptId)
					{
						min = j;
					}
				}
				else
				{
					cout << "输入有误" << endl;
				}
			}

			if (min != i)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[min];
				this->m_EmpArray[min] = temp;
			}
		}

		this->Save(); //保存文件

		cout << "排序成功，排序后结果为： " << endl;
		this->Show_Emp();
	}

	system("pause");
	system("cls");
}

//清空文件
void Workermanager::Clean_Emp()
{
	cout << "确认清空文件？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;
	char select = '0';
	cin >> select;

	if (select == '1')
	{
		ifstream ifs(FILENAME, ios::trunc);

		ifs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}

	system("pause");
	system("cls");
}

//析构函数
Workermanager::~Workermanager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
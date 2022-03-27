#include"showMenu.h" //显示菜单
#include"addPerson.h" //1、添加联系人
#include"showPerson.h" //2、显示联系人
#include"deletePerson.h" //3、删除联系人
#include"findPerson.h" //4、查找联系人
#include"modifyPerson.h" //5、修改联系人
#include"cleanPerson.h" //6、清空联系人

int main() {

	//创建通讯录结构体变量
	Addressbook abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	//创建用户选择输入的变量
	int select = 0;

FLAG:

	//菜单调用
	showMenu();
	
	cin >> select;

	switch (select)
	{
	case 1: //1、添加联系人
		addPerson(&abs); //利用地址传递，可以修改实参
		save(&abs);
		goto FLAG;
	case 2: //2、显示联系人
		showPerson(&abs);
		goto FLAG;
	case 3: //3、删除联系人
		deletePerson(&abs);
		goto FLAG;
	case 4: //4、查找联系人
		findPerson(&abs);
		goto FLAG;
	case 5: //5、修改联系人
		modifyPerson(&abs);
		goto FLAG;
	case 6: //6、清空联系人
		cleanPerson(&abs);
		goto FLAG;
	case 0: //0、退出通讯录
		cout << "欢迎下次使用" << endl;
		system("pause");
		return 0;
	default:
		cout << "请输入正确的数据" << endl;
		system("pause");
		system("cls");
		goto FLAG;
	}

	system("pause");
	return 0;
}
#include"isExist.h"

//定义检测联系人函数:
//检测联系人是否存在，如果存在，返回联系人在通讯录中的位置，如果不存在，返回-1
int isExist(struct Addressbook * p, string name)
{
	for (int i = 0; i < p->m_Size; i++)
	{
		if (p->personArray[i].m_Name == name) //判断是否找到联系人
		{
			return i; //如果找到，则返回联系人在数组中的下标编号 i
		}
	}
	return -1; //如果遍历数组没有找到该联系人，则返回-1
}
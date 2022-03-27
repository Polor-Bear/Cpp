#pragma once
#include<iostream>
using namespace std;
#define MAX 1000 //规定最大人数
#include"person.h"

//定义通讯录结构体
struct Addressbook
{
	struct Person personArray[MAX]; //通讯录中联系人个体
	int m_Size; //通讯录中成员个数
};
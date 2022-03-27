#pragma once
#include"head.h"
#include<fstream>
#define FILENAME "ConFile.txt"

//添加联系人函数声明
void addPerson(struct Addressbook* p);

void save(Addressbook* p);
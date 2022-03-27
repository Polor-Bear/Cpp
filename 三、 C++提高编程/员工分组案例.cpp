//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<map>
//#include<ctime>
//using namespace std;
//
//#define PLAN 0
//#define ARTS 1
//#define RESEARCH 2
//
///*
//* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
//* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
//* 随机给10名员工分配部门和工资
//* 通过multimap进行信息的插入  key(部门编号) value(员工)
//* 分部门显示员工信息
//*/
//
//class Worker
//{
//public:
//	char m_Name;
//	int m_Salary;
//};
//
//void createWorker(vector<Worker>& v, int num)
//{
//	string nameSeed = "ABCDEFGHIJ";
//
//	for (int i = 0; i < num; ++i)
//	{
//		Worker worker;
//		worker.m_Name = nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10001; // 10001 ~ 20000
//
//		//将员工放入到容器中
//		v.push_back(worker);
//	}
//}
//
//void setGroup(const vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); ++it)
//		m.insert(make_pair(rand() % 3, *it)); //将员工插入到分组中	key代表部门编号 value代表具体员工
//}
//
//void showWorkerByGroup(const multimap<int, Worker>& m)
//{
//	cout << "策划部门： " << endl;
//	multimap<int, Worker>::const_iterator pos = m.find(PLAN);
//
//	for (int index = 0; index < m.count(PLAN); ++index, ++pos)
//		cout << "姓名： 员工" << pos->second.m_Name << "	工资： " << pos->second.m_Salary << endl;
//
//	cout << "-----------------------------" << endl;
//	cout << "美术部门： " << endl;
//	pos = m.find(ARTS);
//	
//	for (int index = 0; index < m.count(ARTS); ++index, ++pos)
//		cout << "姓名： 员工" << pos->second.m_Name << "	工资： " << pos->second.m_Salary << endl;
//
//	cout << "-----------------------------" << endl;
//	cout << "研发部门： " << endl;
//	pos = m.find(RESEARCH);
//	
//	for (int index = 0; index < m.count(RESEARCH); ++index, ++pos)
//		cout << "姓名： 员工" << pos->second.m_Name << "	工资： " << pos->second.m_Salary << endl;
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1、创建员工
//	int num = 10; //插入员工数量
//	vector<Worker>vWorker;
//	createWorker(vWorker, num);
//
//	//2、员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3、分组显示员工
//	showWorkerByGroup(mWorker);
//	
//	//测试
//	//for (multimap<int, Worker>::iterator it = mWorker.begin(); it != mWorker.end(); ++it)
//	//	cout << "姓名： 员工" << it->second.m_Name << "	工资： " << it->second.m_Salary << "	" << it->first << endl;
//
//	//总结：当数据以键值对形式存在，可以考虑用map 或 multimap
//
//	system("pause");
//	return 0;
//}
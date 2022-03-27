//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
///*
//	案例描述：
//	有五名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分
//
//	实现步骤：
//	1、创建五名选手，放到vector容器中
//	2、遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//	3、sort算法对deque容器中分数排序，去除最高和最低分
//	4、deque容器遍历一遍，累加总分
//	5、获取平均分
//*/
//
////选手类
//class Person
//{
//public:
//
//	Person(char name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	char m_Name; //姓名
//	int m_Score; //平均分
//};
//
//void creatPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//
//	for (int i = 0; i < 5; i++)
//	{
//		char name = nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//将创建的Person对象 放入到容器中
//		v.push_back(p);
//	}
//}
//
////打分
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		//将评委的分数，放入到deque容器中
//		deque<int>d;
//
//		for (int i = 0; i < 10; i++)
//		{
//			d.push_back(rand() % 41 + 60); //60 ~ 100
//		}
//
//		//排序
//		sort(d.begin(), d.end());
//
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//去除最高分和最低分
//		d.pop_front();
//		d.pop_back();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		{
//			sum += *dit; //累加每个评委的分数
//		}
//
//		int avg = sum / d.size();
//
//		//将平均分，赋值给选手身上
//		it->m_Score = avg;
//	}
//}
//
//void showScore(const vector<Person>& v)
//{
//	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << "选手" << it->m_Name << " 平均分： " << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1、创建5名选手
//	vector<Person>v; //存放选手容器
//	creatPerson(v);
//
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	//{
//	//	cout << "姓名： " << (*it).m_Name << " 分数： " << (*it).m_Score << endl;
//	//}
//
//	//2、给5名选手打分
//	setScore(v);
//
//	//3、显示最终得分
//	showScore(v);
//
//	//总结：选取不同的容器操作数据，可以提升代码的效率
//
//	system("pause");
//	return 0;
//}
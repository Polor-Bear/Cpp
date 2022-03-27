//案例描述: 学校正在做毕设项目，每名老师带领5个学生，总共有3名老师
			//需求如下:
					//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
					//学生的成员有姓名、考试分数，创建数组存放三名老师，通过函数给每个老师及所带的学生赋值
					//最终打印出老师数据以及老师所带的学生数据

#include<iostream>
#include<string>
#include<Ctime>
using namespace std;

//定义学生结构
struct Student
{
	string sName;
	int score;
};

//定义老师结构体
struct Teacher
{
	string tName;
	Student sArray[5];
};

//给老师和学生赋值的函数
void allocatespace(struct Teacher tArray[], int len)
{
	
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 101; // 0~100
			tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名: " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{

			cout << "\t学生姓名: " << tArray[i].sArray[j].sName <<
				"  学生分数: " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main51() {

	//最后一步: 加入随机数种子
	srand((unsigned int)time(NULL));

	//创建3名老师的数组
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//通过函数给3名老师的信息赋值,并给老师带的学生信息赋值
	allocatespace(tArray, len);

	//打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");

	return 0;
}
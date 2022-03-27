//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////多态案例二：制作饮品
//class AbstractDrinking
//{
//public:
//
//	//煮水
//	virtual void boil() = 0;
//
//	//冲泡
//	virtual void brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	void MakeDrink()
//	{
//		boil();
//		brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//
//	//煮水
//	virtual void boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////制作茶叶
//class Tea :public AbstractDrinking
//{
//public:
//
//	//煮水
//	virtual void boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
//void DoWork(AbstractDrinking* abs)
//{
//	abs->MakeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	cout << "制作咖啡: " << endl;
//	DoWork(new Coffee);
//
//	cout << "----------------------" << endl;
//	cout << "制作茶叶: " << endl;
//	DoWork(new Tea);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
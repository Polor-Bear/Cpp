//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//
////抽象不同零件类
////抽象CPU类
//class CPU
//{
//public:
//	//抽象计算函数
//	virtual void Calculate() = 0;
//};
//
////抽象显卡类
//class VideoCard
//{
//public:
//	//抽象显示函数
//	virtual void Dispaly() = 0;
//};
//
////抽象内存条类
//class Memory
//{
//public:
//	//抽象存储函数
//	virtual void Storage() = 0;
//};
//
//class Computer
//{
//public:
//	
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem) :m_Cpu(cpu), m_Vc(vc), m_Mem(mem)
//	{
//
//	}
//
//	//提供工作的函数
//	void DoWork()
//	{
//		//让零件工作起来，调用接口
//		m_Cpu->Calculate();
//
//		m_Vc->Dispaly();
//
//		m_Mem->Storage();
//	}
//
//	//提供析构函数，释放3个电脑零件
//	~Computer()
//	{
//		//释放CPU零件
//		if (m_Cpu != NULL)
//		{
//			delete m_Cpu;
//			m_Cpu = NULL;
//		}
//
//		//释放显卡零件
//		if (m_Vc != NULL)
//		{
//			delete m_Vc;
//			m_Vc = NULL;
//		}
//
//		//释放内存条零件
//		if (m_Mem != NULL)
//		{
//			delete m_Mem;
//			m_Mem = NULL;
//		}
//	}
//
//private:
//
//	CPU* m_Cpu; //CPU的零件指针
//	VideoCard* m_Vc; //显卡的零件指针
//	Memory* m_Mem; //内存条的零件指针
//};
//
////具体厂商
////Intel厂商
//class IntelCPU :public CPU
//{
//	virtual void Calculate()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void Dispaly()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void Storage()
//	{
//		cout << "Intel的内存条开始存储了！" << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//	virtual void Calculate()
//	{
//		cout << "Lenovo的CPU开始计算了！" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void Dispaly()
//	{
//		cout << "Lenovo的显卡开始显示了！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void Storage()
//	{
//		cout << "Lenovo的内存条开始存储了！" << endl;
//	}
//};
//
//void test01()
//{
//	//第一台电脑零件
//	CPU* IntelCpu = new IntelCPU;
//	VideoCard* IntelCard = new IntelVideoCard;
//	Memory* IntelMem = new IntelMemory;
//
//	cout << "第一台电脑开始工作: " << endl;
//	//创建第一台电脑
//	Computer* computer1 = new Computer(IntelCpu, IntelCard, IntelMem);
//	computer1->DoWork();
//	delete computer1;
//
//	cout << "----------------------" << endl;
//	cout << "第二台电脑开始工作: " << endl;
//	//第二台电脑组装
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->DoWork();
//	delete computer2;
//
//	cout << "----------------------" << endl;
//	cout << "第三台电脑开始工作: " << endl;
//	//第三台电脑组装
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->DoWork();
//	delete computer3;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
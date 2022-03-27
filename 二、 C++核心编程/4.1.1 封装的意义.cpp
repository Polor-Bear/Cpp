//#include"head.h"
//
//// 封装是C++面向对象三大特性之一
//
////封装的意义:
//
////将属性和行为作为一个整体，表现生活中的事物
////将属性和行为加以权限控制
//
////封装意义一:
////在设计类的时候，属性和行为写在一起，表现事物
//
////语法: class		类名{访问权限:	属性/行为};
//
////圆周率
//const double PI = 3.14;
//
////示例1: 设计一个圆类，求圆的周长
////圆求周长的公式	2 * PI * 半径
//
//class Circle
//{
//	//访问权限
//	//公共权限 public
//public:
//	//属性
//	int m_r;
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
////封装意义二:
////类在设计时，可以把属性和行为放在不同的权限下，加以控制
//
////访问权限有三种:
////1. 公共权限	public		成员 类内可以访问 类外也可以访问
////2. 保护权限	protected	成员 类内可以访问 类外不可以访问	子类可以访问父类中的保护内容
////3. 私有权限	private		成员 类内可以访问 类外不可以访问	子类不可以访问父类中的私有内容
//
//class Person
//{
//public:
//	//公共权限
//	string m_Name; //姓名
//protected:
//	//保护权限
//	string m_Car; //汽车
//private:
//	//私有权限
//	int m_Password; //银行卡密码
//
//public:
//	void func() {
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//
//	//在类内创建拥有公共权限的赋值函数，可以在类外运用该函数访问有保护权限和私有权限的内容
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	void setCar(string car) {
//		m_Car = car;
//	}
//
//	void setPassword(int password) {
//		m_Password = password;
//	}
//
//	void showPerson() {
//		cout << "姓名: " << m_Name << "  汽车: " << m_Car << "  银行卡密码: " << m_Password << endl;
//	}
//};
//
//int main() {
//
//	//通过圆类	创建具体的圆( 对象 )
//	//实例化	(通过一个类	创建一个对象的过程)
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//
//	//2 * PI * 10 = 62.8
//	cout << "圆的周长为: " << c1.calculateZC() << endl;
//
//	system("pause");
//	return 0;
//}
//
//int main() {
//
//	Person p1;
//
//	//p1.func(); //由于不知为何原因4.1.3 程序报错，所以注释掉该行代码
//
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰"; //保护权限内容，在类外访问不到
//	//p1.m_Password = 123; //私有权限内容，类外访问不到
//
//	p1.setName("王五");
//	p1.setCar("奔驰"); //利用类内公共权限函数，可以访问保护权限内容
//	p1.setPassword(123); //利用类内公共权限函数，可以访问私有权限内容
//
//	p1.showPerson();
//
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////继承技术实现页面效果
//
////公共页面类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//
//	void left()
//	{
//		cout << "JAVA,Python,C++...(公共分类列表)" << endl;
//	}
//};
//
////继承的好处，减少重复代码
////语法: class 子类 : 继承方式 父类
////子类	也成为	派生类
////父类	也成为	基类
//
////JAVA页面
//class JAVA :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	//JAVA页面
//	cout << "JAVA下载视频页面如下: " << endl;
//	JAVA ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "----------------------" << endl;
//
//	//Python界面
//	cout << "Python下载视频页面如下: " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "----------------------" << endl;
//
//	//C++界面
//	cout << "C++下载视频页面如下: " << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//
//int main() {
//
//	test01();
//
//	//派生类的成员，包含两大部分
//	//一部分是从基类继承过来的，一部分是自己新增的成员
//	//从基类继承过来的表现其共性，而新增的成员表现了其个性
//
//	system("pause");
//	return 0;
//}
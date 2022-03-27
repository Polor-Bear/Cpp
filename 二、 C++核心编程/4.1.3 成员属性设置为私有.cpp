//#include"head.h"
//
////成员属性设置为私有
//
////优点1: 将所有成员属性设置为私有，可以自己控制读写权限
////优点2: 对于写权限，我们可以检测数据的有效性
//
////设计人类
//class Person
//{
//private:
//	string m_Name; //姓名	可读可写
//	int m_Age; //年龄	只读
//	string m_Lover; //情人	只写
//public:
//	//姓名设置可读可写
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName() {
//		return m_Name;
//	}
//
//	//设置年龄
//	void setAge(int age) {
//		if (age < 1 || age > 150) {
//			age = 1;
//			cout << "你个老妖精" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//获取年龄
//	int getAge() {
//		return m_Age;
//	}
//
//	//情人设置为只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//};
//
//int main() {
//
//	Person p;
//	//姓名设置
//	p.setName("张起灵");
//	cout << "姓名: " << p.getName() << endl;
//
//	//年龄设置
//	p.setAge(50);
//	cout << "年龄: " << p.getAge() << endl;
//
//	//情人设置
//	p.setLover("吴邪");
//	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取6
//
//	system("pause");
//	return 0;
//}
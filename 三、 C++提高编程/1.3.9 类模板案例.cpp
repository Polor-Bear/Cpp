//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//#include"MyArray.hpp"
//
////案例描述：实现一个通用的数组类，要求如下
//
////可以对内置数据类型以及自定义数据类型的数据进行存储
////将数组中的数据存储到堆区
////构造函数中可以传入数组的容量
////提供对应的拷贝构造函数以及operator=防止浅拷贝问题
////提供尾插法和尾删法对数组中的数据进行增加和删除
////可以通过下标的方式访问数组中的元素
////可以获取数组中当前元素个数和数组的容量
//
//template<class T>
//void printIntArray(MyArray<T>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test01()
//{
//	MyArray<int> arr1(5);
//	for (int i = 0; i < arr1.getCapacity(); i++)
//	{
//		arr1.Push_Back(i);
//	}
//
//	cout << "arr1的打印输出为： " << endl;
//	printIntArray<int>(arr1);
//
//	cout << "arr1的容量为： " << arr1.getCapacity() << endl;
//	cout << "arr1的大小为： " << arr1.getSize() << endl;
//
//	MyArray<int> arr2(arr1);
//	cout << "arr2的打印输出为： " << endl;
//	printIntArray<int>(arr2);
//
//	//尾删
//	arr2.Pop_Back();
//
//	cout << "尾删后： " << endl;
//	cout << "arr2的容量为： " << arr2.getCapacity() << endl;
//	cout << "arr2的大小为： " << arr2.getSize() << endl;
//
//	//MyArray<int> arr3(100);
//	//arr3 = arr1;
//}
//
////测试自定义数据类型
//class Person
//{
//public:
//
//	Person() {};
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void printPersonArray(MyArray<Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << "姓名： " << arr[i].m_Name << "	年龄： " << arr[i].m_Age << endl;
//	}
//}
//
//void test02()
//{
//	MyArray<Person> arr(10);
//
//	Person p1("孙悟空", 999);
//	Person p2("韩信", 30);
//	Person p3("妲已", 20);
//	Person p4("赵云", 25);
//	Person p5("安琪拉", 27);
//
//	//将数据插入到数组中
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//
//	//打印数组
//	printPersonArray(arr);
//
//	//输出容量和大小
//	cout << "arr容量为： " << arr.getCapacity() << endl;
//	cout << "arr大小为： " << arr.getSize() << endl;
//
//	//尾删法
//	arr.Pop_Back();
//
//	//尾删后
//	printPersonArray(arr);
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	//能够利用所学知识点实现通用的数组
//
//	system("pause");
//	return 0;
//}
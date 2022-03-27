#include<iostream>
using namespace std;

int main424() {
	//嵌套循环
	//作用：在循环体中再嵌套一层循环，解决一些实际问题
	//利用嵌套循环实现星图

	//外层执行一次，内层执行一周
	//外层循环
	for (int a = 0; a < 10; a++)
	{
		//内层循环
		for (int b = 0; b < 10; b++) //注意：内外层变量尽量区别开来
		{
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
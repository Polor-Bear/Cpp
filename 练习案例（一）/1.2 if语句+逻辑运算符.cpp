//练习案例：三只小猪称体重
//案例描述：有三只小猪，请分别输入三只小猪的体重，并且判断哪只小猪最重

//思路：直接用小猪A与另外两只小猪作比较，若小猪A大于另外两只小猪，则小猪A最重；
//然后依次用小猪B与C与另外两只小猪作比较，直到计算出哪只小猪最重

#include<iostream>
using namespace std;

int main12() {

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "请输入小猪A的体重：\n";
	cout << "请输入小猪B的体重：\n";
	cout << "请输入小猪C的体重：\n";
	cin >> num1 >> num2 >> num3;

	cout << "小猪A的体重为：" << num1 << endl;
	cout << "小猪B的体重为：" << num2 << endl;
	cout << "小猪C的体重为：" << num3 << endl;

	if (num1 > num2 && num1 > num3)
	{
		cout << "小猪A最重\n";
	}
	else if (num2 > num1 && num2 > num3)
	{
		cout << "小猪B最重\n";
	}
	else if (num3 > num1 && num3 > num2)
	{
		cout << "小猪C最重\n";
	}
	else
	{
		cout << "某两只小猪体重相等，或三只小猪体重均相等\n";
	}

	system("pause");

	return 0;

	//特点：解决了若其中有多只小猪体重相等时无法计算出结果的问题，且语法也相对简洁
}
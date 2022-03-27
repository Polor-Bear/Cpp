#include<iostream>
using namespace std;

int main433() {
	//goto语句
	//作用：可以无条件跳转语句
	//语法：goto 标记；
	//解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置

	cout << "1、xxxxxx\n";

	cout << "2、xxxxxx\n";

	goto FLAG;

	cout << "3、xxxxxx\n";

	cout << "4、xxxxxx\n";

	FLAG:

	cout << "5、xxxxxx\n";
	//注意：在程序中不建议使用goto语句，以免造成程序流程混乱

	system("pause");

	return 0;
}
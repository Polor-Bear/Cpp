#include<iostream>
using namespace std;

int main27() {

//作用： 布尔数据类型代表真或假的值
/*布尔类型只有两个值：
true  - 真 （本质是1）
false - 假 （本质是0）
*/
//bool类型占1个字节大小

//1、创建bool数据类型
bool flag = true; //true代表真
cout << flag << endl;

flag = false;
cout << flag << endl;

//本质上 1代表真 0代表假

//2、v哈看bool类型所占内存空间

cout << "bool类型所占内存空间：" << sizeof(bool) << endl;

system("pause");

return 0;
}
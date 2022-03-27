#include"head.h"

//在C++中	struct 和 class 唯一的区别就在于默认的访问权限不同
//	struct	默认权限是	公共	public
//	class	默认权限是	私有	private

class C1
{
	int m_A; //默认是私有权限
};

struct S1
{
	int m_A; //默认是公共权限
};

int main412() {

	C1 c1;
	//c1.m_A = 100; //在class中默认权限为私有，因此不可以访问

	S1 s1;
	s1.m_A = 100; //在struct中默认权限为公共，因此可以访问

	system("pause");
	return 0;
}
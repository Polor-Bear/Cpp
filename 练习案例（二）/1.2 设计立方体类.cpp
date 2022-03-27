//案例描述: 设计立方体类(Cube)，求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等。

#include"heah.h"

class Cube
{
private:
	int m_L; //	长
	int m_W; //	宽
	int m_H; //	高
public:
	//设置长
	void setL(int l) {
		m_L = l;
	}

	int getL() {
		return m_L;
	}
	//设置宽
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}

	//设置高
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}

	//获取面积
	int calculateS() {
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//获取体积
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//利用成员函数判断	两个立方体是否相等
	bool isSamebyClass(Cube &a) {
		return calculateS() == a.calculateS() && calculateV() == a.calculateV() ? true : false;
	}
};

//利用全局函数判断	两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) {
	return c1.calculateS() == c2.calculateS() && c1.calculateV() == c2.calculateV() ? true : false;
}

int main12(){

	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "立方体c1的面积为: " << c1.calculateS() << endl;
	cout << "立方体c1的体积为: " << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2);
	ret ? cout << "全局函数判断: c1和c2是相等的" << endl : cout << "全局函数判断: c1和c2是不相等的" << endl;

	ret = c1.isSamebyClass(c2);
	ret ? cout << "成员函数判断: c1和c2是相等的" << endl : cout << "成员函数判断: c1和c2是不相等的" << endl;
	
	system("pause");
	return 0;
}
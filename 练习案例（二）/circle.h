#pragma once
#include"heah.h"
#include"point.h"

//圆类
class Circle
{
public:
	//设置半径
	void setR(int r);

	int getR();

	//设置圆心
	void setCenter(Point center);

	Point getCenter();

private:
	int m_R; //半径

	//在类中可以让另一个类	做本类的成员(嵌套类)
	Point m_Center; //圆心
};
#pragma once
#include"heah.h"

//点类
class Point
{
public:
	//设置X轴
	void setX(int x);

	int getX();

	//设置Y轴
	void setY(int y);

	int getY();

private:
	int m_X; //X轴
	int m_Y; //Y轴
};
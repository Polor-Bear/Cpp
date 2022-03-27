////案例描述: 设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
//
//#include"heah.h"
//#include"circle.h"
//
////判断点和圆的关系
//void isInCircle(Point &p, Circle &c) {
//	//计算两点之间距离 平方
//	int distance =
//		(p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) +
//		(p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
//	//计算半径的平方
//	int rDistance = c.getR() * c.getR();
//	//判断关系
//	if (distance == rDistance) {
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main() {
//
//	//设计点
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	//设计圆
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//判断关系
//	isInCircle(p, c);
//
//	system("pause");
//	return 0;
//}
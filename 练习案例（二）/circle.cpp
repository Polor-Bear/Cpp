#pragma once
#include"circle.h"

//ÉèÖÃ°ë¾¶
void Circle::setR(int r) {
	m_R = r;
}
int Circle::getR() {
	return m_R;
}
//ÉèÖÃÔ²ĞÄ
void Circle::setCenter(Point center) {
	m_Center = center;
}
Point Circle::getCenter() {
	return m_Center;
}
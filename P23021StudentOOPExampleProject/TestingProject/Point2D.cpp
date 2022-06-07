#include "Point2D.h"

Point2D::Point2D() : x(0), y(0) {}
Point2D::Point2D(int x, int y) : x(x), y(y) {}

int Point2D::getX() const {
	return x;
}

int Point2D::getY() const {
	return y;
}

void Point2D::setX(int x) {
	this->x = x;
}

void Point2D::setY(int y) {
	this->y = y;
}

Point2D Point2D::sum(Point2D point) const {
	int tx = x + point.x;
	int ty = y + point.y;
	return Point2D(tx, ty);
}

Point2D Point2D::operator +(Point2D point) const {
	int tx = x + point.x;
	int ty = y + point.y;
	return Point2D(tx, ty);
}


Point2D Point2D::sub(Point2D point) const {
	return Point2D(x - point.x, y - point.y);
}

int Point2D::mul(Point2D point) const {
	return x * point.x + y * point.y;
}

string Point2D::getInfo() {
	return "Point: x = " + to_string(x) 
		+ ", y = " + to_string(y);
}
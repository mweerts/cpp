#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point &Point::operator=(Point &other) {
	(void)other;
    return (*this);
}

Point::~Point() {}

Fixed Point::getX() {
    return (_x);
}

Fixed Point::getY() {
    return (_y);
}

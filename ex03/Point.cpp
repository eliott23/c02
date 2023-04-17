#include "Point.hpp"

Point::Point()
{
    x = 0;
    y = 0;    
}

Point::Point(Point& p)
{
    this->x = p.x;
    this->y = p.y;
}

Point& Point::operator=(const Point& p)
{
    this->x = p.x;
    this->y = p.y;
    return (*this);
}

Point::Point(float i, float j)
{
    x = i;
    y = j;
}

Point::~Point()
{
}

Fixed   Point::getx() const
{
    return x;
}

Fixed   Point::gety() const
{
    return y;
}
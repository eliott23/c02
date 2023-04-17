#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class   Point
{
    public:
    Fixed   getx() const;
    Fixed   gety() const;
    Point();
    Point(Point& P);
    Point(const float i,const float j);
    Point& operator=(const Point& p);
    ~Point();
    private:
    Fixed   x;
    Fixed   y;
};
#endif
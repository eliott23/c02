#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class   Point
{
    public:
    Fixed   getx() const;
    Fixed   gety() const;
    Point();
    Point(const Point& P);
    Point(const float i,const float j);
    Point& operator=(const Point& p);
    ~Point();
    private:
    Fixed   x;
    Fixed   y;
};
bool bsp( const Point a, const Point b, const Point c, const Point p);
Fixed   area(const Point& a,const Point& b,const Point& c);
Fixed   f_abs(const Fixed& abs);
#endif
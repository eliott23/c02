#include "Point.hpp"

Fixed   f_abs(const Fixed& abs)
{
    if (abs < 0)
        return (abs * (-1));
    return (abs);
}

Fixed   area(const Point& a,const Point& b,const Point& c)
{
    return (((a.getx()*(b.gety() - c.gety()))+ ( b.getx() * (c.gety() - a.gety()) )  + ( c.getx() * (a.gety() - b.gety()))) / 2);
}

Fixed   de(const Point& a, const Point& b)
{
    Fixed r = (a.getx() * b.gety()) - (a.gety() * b.getx());
    return (r);
}

bool bsp( const Point a, const Point b, const Point c, const Point point)
{
    Fixed   A,a1,a2,a3;
    a1 = f_abs(area(a, c, point));
    a2 = f_abs(area(b, c, point));
    a3 = f_abs(area(a, b, point));
    A = f_abs(area(a, b, c));
    return (a1 != 0 && a2 != 0  && a3 != 0 && A == (a1 + a2 + a3));
}
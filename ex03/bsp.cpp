#include "Point.hpp"

Fixed   de(const Point& a, const Point& b)
{
    Fixed r = (a.getx() * b.gety()) - (a.gety() * b.getx());
    return (r);
}

bool bsp( const Point a, const Point b, const Point c, const Point p)
{
    Fixed Da = (de(p, c) - de(a, b)) / de(a, c);
    Fixed Db = (de(p, b) - de(a, c)) / de(a, c);
    if (Da > 0 && Db > 0 && (Db + Da) < 1)
        return 1;
    return 0;
}
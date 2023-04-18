#include <iostream>
#include "Point.hpp"

int main( void )
{
     Point a(0, 0);
     Point b(4, 0);
     Point c(0, 5);
     Point p(1, 0.1f);
    if (bsp(a, b, c, p))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is outside or on the edges of the triangle" << std::endl;
    a = p;
    if (bsp(a, b, c, p))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is outside or on the edges of the triangle" << std::endl;
    return 0;
}
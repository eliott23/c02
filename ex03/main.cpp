#include <iostream>
#include "Point.hpp"

int main( void )
{
    const Point a(0, 0);
    const Point b(3, 0);
    const Point c(0, 4);
    const Point p(1, 1);
    if (bsp(a, b, c, p))
        std::cout << "yuuuup" << std::endl;
    // else
    //     std::cout << "noooope" << std::endl;
    return 0;
}
#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b( 5.1f );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 5 );
    std::cout << a << std::endl;
    a = a + b + a + b;
    std::cout << a << std::endl;
    a.setRawBits(0);
    std::cout << --a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
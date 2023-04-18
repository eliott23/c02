#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed f( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    Fixed t(2.5f);
    Fixed s(52.5f);
    std::cout << (b / t / s) << std::endl;
    std::cout << (9 / 2) << std::endl;
    std::cout << b << std::endl;
    // Fixed t(0.003f);
    // Fixed h(0.5f);
    // Fixed l(5.5f);
    // Fixed g(99);
    // f = ((f + f + (t * g)) / h) - l;
    // std::cout << f << std::endl;
    // std::cout << f-- << std::endl;
    // std::cout << f << std::endl;
    // std::cout << --f << std::endl;
    return 0;
}
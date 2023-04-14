#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{

private:
    int fixed_point;
    static const int frac_bits = 8;
public:
    int getRawBits(void) const;
    void   setRawBits(int const raw);
    Fixed();
    Fixed& operator=(Fixed& fi);
    Fixed(Fixed &fi);
    ~Fixed();
};
#endif
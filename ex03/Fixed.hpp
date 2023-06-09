#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <fstream>
#include <cmath>

class Fixed
{
private:
    int fixed_point;
    static const int frac_bits = 8;
public:
    int getRawBits(void) const;
    void   setRawBits(int const raw);
    float   toFloat(void) const;
    int   toInt(void) const;
    Fixed();
    Fixed(const int i);
    Fixed(const float i);
    Fixed&  operator=(const Fixed& fi);
    bool     operator<(const Fixed& i) const;
    bool     operator>(const Fixed& i) const;
    bool     operator>=(const Fixed& i) const;
    bool     operator<=(const Fixed& i) const;
    bool     operator==(const Fixed& i) const;
    bool     operator!=(const Fixed& i) const;
    Fixed   operator+(const Fixed& i) const;
    Fixed  operator-(const Fixed& i) const;
    Fixed  operator*(const Fixed& i) const;
    Fixed  operator/(const Fixed& i) const;
    Fixed   operator++();
    Fixed   operator++(int i);
    Fixed   operator--();
    Fixed   operator--(int i);
    static Fixed&   min(Fixed& a, Fixed &b);
    static Fixed&  max(Fixed& a, Fixed& b);
    static const Fixed&   min(const Fixed& a, const Fixed& b);
    static const Fixed&   max(const Fixed& a, const Fixed& b);
    Fixed(const Fixed &fi);
    ~Fixed();
};
std::ostream& operator<<(std::ostream& os, const Fixed& f);
#endif
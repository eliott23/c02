#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{

private:
    int fixed_point;
    static const int frac_bits;
public:
    int getRawBits(void) const;
    void   setRawBits(int const raw);
    Fixed();
    Fixed& operator=(Fixed& fi);
    Fixed(Fixed &fi);
    ~Fixed();
};

void   Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits function called" << std::endl;
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function called" << std::endl;
    return (fixed_point);
}

Fixed::Fixed()
{
    std::cout << "Default Contructor Called" << std::endl;
    fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Default Destructor Called" << std::endl;
}

Fixed::Fixed(Fixed &fi)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = fi.fixed_point; 
}

Fixed& Fixed::operator=(Fixed& fi)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixed_point = fi.fixed_point;
}

#endif
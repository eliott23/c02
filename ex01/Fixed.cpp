#include "Fixed.hpp"

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

Fixed::Fixed(const Fixed &fi)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fi;
}

Fixed& Fixed::operator=(const Fixed& fi)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = fi.getRawBits();
    return (*this);
}

Fixed::Fixed(const int i)
{
    fixed_point = i << frac_bits;
}

std::ostream& operator<<(std::ostream& os, Fixed f)
{
    os << f.toFloat();
    return os;
}

Fixed::Fixed(const float i)
{
    fixed_point = (int)(i * (1 << frac_bits));
}

float   Fixed::toFloat(void) const
{
        return ((float)fixed_point / (float)(1 << frac_bits));
}

int Fixed::toInt(void) const
{
    return (fixed_point >> frac_bits);
}
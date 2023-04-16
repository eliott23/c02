#include "Fixed.hpp"

void   Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function called" << std::endl;
    return (fixed_point);
}

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fi)
{
    *this = fi;
}

Fixed& Fixed::operator=(const Fixed& fi)
{
    this->fixed_point = fi.getRawBits();
    return (*this);
}

Fixed::Fixed(int i)
{
    fixed_point = i << frac_bits;
}

std::ostream& operator<<(std::ostream& os, Fixed f)
{
    os << f.toFloat();
    return os;
}

Fixed::Fixed(float i)
{
    fixed_point = roundf(i * (1 << frac_bits));
}

float   Fixed::toFloat(void) const
{
        return ((float)fixed_point / (float)(1 << frac_bits));
}

int Fixed::toInt(void) const
{
    return (fixed_point >> frac_bits);
}

bool     Fixed::operator<(const Fixed& i) const
{
    return (this->fixed_point < i.getRawBits());
}

bool     Fixed::operator>(const Fixed& i) const
{
    return (this->fixed_point > i.getRawBits());
}

bool     Fixed::operator>=(const Fixed& i) const
{
    return (this->fixed_point >= i.getRawBits());
}

bool     Fixed::operator<=(const Fixed& i) const
{
    return (this->fixed_point <= i.getRawBits());
}

bool     Fixed::operator!=(const Fixed& i) const
{
    return (this->fixed_point != i.getRawBits());
}

Fixed     Fixed::operator+(Fixed i)
{
    i.setRawBits((i.getRawBits() + this->fixed_point));
    return (i);
}

Fixed     Fixed::operator-( Fixed i)
{
    i.setRawBits(i.getRawBits() - this->fixed_point);
    return (i);
}

Fixed     Fixed::operator*( Fixed i)
{
    this->fixed_point = (this->fixed_point * i.getRawBits()) >> frac_bits;
    return (*this);
}

Fixed     Fixed::operator/( Fixed i)
{
    this->fixed_point = (this->fixed_point << frac_bits) / i.getRawBits();
    return (*this);
}

Fixed   Fixed::operator++()
{
    this->fixed_point++;
    return (*this);
}

Fixed   Fixed::operator++(int i)
{
    (void)i;
    Fixed h = *this;
    this->fixed_point++;
    return (h);
}

Fixed   Fixed::operator--()
{
    this->fixed_point--;
    return (*this);
}

Fixed   Fixed::operator--(int i)
{
    (void)i;
    Fixed h = *this;
    this->fixed_point--;
    return (h);
}
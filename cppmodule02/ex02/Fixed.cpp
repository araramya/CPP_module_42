#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::Fixed(const int value)
{
    this->fixed_point = value << this->fract_bits;
}

Fixed::Fixed(const float value)
{
    this->fixed_point = (value * (1 << this->fract_bits));
}

Fixed::Fixed(const Fixed &old)
{
    this->fixed_point = old.fixed_point;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &old)
{
    if(this->fixed_point == old.fixed_point)
        return (*this);
    this->fixed_point = old.fixed_point;
        return (*this);
}

bool Fixed::operator>(const Fixed &old) const
{
    if(this->fixed_point > old.fixed_point)
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed &old) const
{
    if(this->fixed_point < old.fixed_point)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed &old) const
{
    if(this->fixed_point <= old.fixed_point)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed &old) const
{
    if(this->fixed_point <= old.fixed_point)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed &old) const
{
    if(this->fixed_point == old.fixed_point)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed &old) const
{
    if(this->fixed_point != old.fixed_point)
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed &old)
{
    return (this->toFloat() + old.toFloat());
}

Fixed Fixed::operator-(const Fixed &old)
{
    return (this->toFloat() - old.toFloat());
}

Fixed Fixed::operator*(const Fixed &old)
{
    Fixed temp(this->toFloat() * old.toFloat());
    return (temp);
}

Fixed Fixed::operator/(const Fixed &old)
{
    Fixed temp(this->toFloat() / old.toFloat());
    return (temp);
}

Fixed Fixed::operator++()
{
    Fixed temp;
    temp.fixed_point = ++fixed_point;
    return (temp);
}

Fixed Fixed::operator++(int)
{
    Fixed temp;
    temp.fixed_point = fixed_point++;
    return (temp);
}

Fixed Fixed::operator--()
{
    Fixed temp;
    temp.fixed_point = --fixed_point;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp;
    temp.fixed_point = fixed_point--;
    return (temp);
}

int Fixed::getRawBits()
{
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

Fixed const &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
    return (obj1 > obj2 ? obj1 : obj2);
}

Fixed const &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
    return (obj1 < obj2 ? obj1 : obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    //std::cout <<"hellik" << std::endl;
    return (Fixed::max(obj1, obj2));
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    return (Fixed::min(obj1, obj2));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed_point / (float)(1 << 8));
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point >> this->fract_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& value)
{
    os << value.toFloat();
    return (os);
}

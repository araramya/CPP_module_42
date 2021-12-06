#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBirs member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
    std::cout << "setRawBits member function called"<< std::endl;
}

Fixed::Fixed(const int ival)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = (ival << this->fract_bits);
}

Fixed::Fixed(const float fval)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(fval * (1 << this->fract_bits));
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = old.fixed_point;
}


Fixed& Fixed::operator=(const Fixed &old)
{
    std::cout << "Assignement operator called" << std::endl;
    if(this->fixed_point == old.fixed_point)
        return (*this);
    this->fixed_point = old.fixed_point;
    return (*this);
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
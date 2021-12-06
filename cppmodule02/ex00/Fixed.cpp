#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = old.fixed_point;
}

Fixed& Fixed::operator=(const Fixed &old)
{
    std::cout << "assignement operator called" << std::endl;
    if(&old == this)
        return (*this);
    this->fixed_point = old.fixed_point;
    return(*this);
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
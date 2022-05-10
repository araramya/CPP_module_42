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

Fixed::Fixed(const Fixed& old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = old_obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& old_obj)
{
    std::cout << "Copy assignament operator called" << std::endl;
    if(&old_obj == this)
        return *this;
    else
        this->fixed_point = old_obj.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}

void Fixed::setRawBits (int const raw)
{
    std::cout << "setRawBits member function called" <<std::endl;
    this->fixed_point = raw;
}
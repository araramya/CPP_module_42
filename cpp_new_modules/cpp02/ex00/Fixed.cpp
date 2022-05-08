#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = old_obj.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& old_obj)
{
    std::cout << "Copy assignament operator called" << std::endl;
    if(&old_obj == this)
        return *this;
    else
        this->fixed_point = old_obj.fixed_point;
    return *this;
}




#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WRONGCAT:: Defaul constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WRONGCAT:: Copy constructor called" << std::endl;
    type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WRONGCAT:: Assignement operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WRONGCAT:: Default Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "I WILL NOT SAY MYAU , GO AWAY, HATE YOU" << std::endl;
}

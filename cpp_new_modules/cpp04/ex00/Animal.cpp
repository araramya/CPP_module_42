#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "ANIMAL:: Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    type = other.type;
    std::cout << "ANIMAL:: Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "ANIMAL:: Assignement operator called" << std::endl;
    if(&other == this)
        return *this;
    type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "ANIMAL:: Default Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Specific sound for Animal" << std::endl;
}
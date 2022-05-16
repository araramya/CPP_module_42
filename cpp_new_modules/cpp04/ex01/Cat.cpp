#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "CAT:: Defaul constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& other)
{
    std::cout << "CAT:: Copy constructor called" << std::endl;
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat:: Assignement operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat:: Default Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "I WILL NOT SAY MYAU , GO AWAY, HATE YOU" << std::endl;
}
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "DOG:: Defaul constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& other)
{
    std::cout << "DOG:: Copy constructor called" << std::endl;
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "DOG:: Assignement operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "DOG:: Default Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hello I am DOG, HAF HAF HAF, Love you )" << std::endl;
}


#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "CAT:: Defaul constructor called" << std::endl;
    type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other)
{
    std::cout << "CAT:: Copy constructor called" << std::endl;
    type = other.type;
    brain = new Brain();
    if(brain)
        brain = other.brain;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat:: Assignement operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    brain = new Brain();
    if(brain)
        brain = other.brain;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat:: Default Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "I WILL NOT SAY MYAU , GO AWAY, HATE YOU" << std::endl;
}
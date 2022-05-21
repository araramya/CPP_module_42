#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "DOG:: Defaul constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    std::cout << "DOG:: Copy constructor called" << std::endl;
    type = other.type;
    brain = new Brain();
    if(brain)
        brain = other.brain;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "DOG:: Assignement operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    brain = new Brain();
    if(brain)
        brain = other.brain;
    return *this;
}

Dog::~Dog()
{
    std::cout << "DOG:: Default Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Hello I am DOG, HAF HAF HAF, Love you )" << std::endl;
}

void Dog::setIdea(std::string idea, int i)
{
    brain->ideas[i] = idea;
}

std::string Dog::getIdea(int i)
{
    std::cout << brain->ideas[i];
    return brain->ideas[i];
}


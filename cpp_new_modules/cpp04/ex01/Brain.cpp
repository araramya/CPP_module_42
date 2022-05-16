#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "BRAIN:: Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "BRAIN:: Default destructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < ID_NUM; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    if(this == &other)
        return *this;
    for (int i = 0; i < ID_NUM; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}
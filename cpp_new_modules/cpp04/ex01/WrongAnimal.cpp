#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WRONGANIMAL:: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    type = other.type;
    std::cout << "WRONGANIMAL:: Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WRONGANIMAL:: Assignement operator called" << std::endl;
    if(&other == this)
        return *this;
    type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WRONGANIMAL:: Default Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Specific sound for WrongAnimal" << std::endl;
}

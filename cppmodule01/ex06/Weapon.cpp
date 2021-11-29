#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string const &Weapon::getType(void)
{
    return (this->type);
}

Weapon::~Weapon()
{
    std::cout << "weapon was destructed" << std::endl;
}
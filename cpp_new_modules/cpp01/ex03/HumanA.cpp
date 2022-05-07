#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponA) : weaponA(weaponA)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{ 
    std::cout << this->name << " attacks with their " << this->weaponA.getType();
}
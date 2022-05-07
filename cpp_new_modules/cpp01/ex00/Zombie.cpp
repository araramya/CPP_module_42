#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "Deafault Zombie Name";
}

Zombie::Zombie( std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Destructed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
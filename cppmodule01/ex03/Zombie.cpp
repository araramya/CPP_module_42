# include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
    this->type = type;
    this->name = name;
}

Zombie::Zombie()
{
    //std::cout << "well Hello" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->type << " " << this->name << " zombie was destructed !!!!" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" <<this->name << " (" << this->type << ")> Braiiiiiiinnnnsssss........" << std::endl;
}

void Zombie::setZombieType(std::string type)
{
    this->type = type;
}

void Zombie::setZombieName(std::string name)
{
    this->name = name;
}
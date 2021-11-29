# include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
    this->type = type;
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->type << " " << this->name << " zombie was destructed !!!!" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" <<this->name << " (" << this->type << ")> Braiiiiiiinnnnsssss........" << std::endl;
}
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Defaoul Constructor Called" << std::endl;
    name = "Default_name";
    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "Constructor for " << name << " called" << std::endl;
    this->name = name;
    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy Constructor Called" << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage = other.attack_demage;
    this->energy_points = other.energy_points;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this == &other)
        return *this;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage =other.attack_demage;
    this->energy_points = other.energy_points;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hit_points > 0 && this->energy_points > 0) 
    {
        this->hit_points--;
        std::cout << "ClapTrap " << this->name << " arracks " <<
        target << ", causing" << attack_demage << " points of demage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << "Can't do anything" << std::endl;
}
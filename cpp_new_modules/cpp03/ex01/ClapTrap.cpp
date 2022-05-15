#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "Default_name";
    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
    std::cout << "CLAPTRAP:: Default Constructor Called" << name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "CLAPTRAP:: Constructor for " << name << " called" << std::endl;
    this->name = name;
    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "CLAPTRAP:: Copy Constructor Called" << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage = other.attack_demage;
    this->energy_points = other.energy_points;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CLAPTRAP:: Destructor called for " << this->name << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this == &other)
        return *this;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage =other.attack_demage;
    this->energy_points = other.energy_points;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hit_points > 0 && this->energy_points > 0) 
    {
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks " <<
        target << ", causing " << attack_demage << " points of demage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " Can't do anything" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points > 0)
    {
        if(this->hit_points < amount)
            this->hit_points = 0;
        else
            this->hit_points -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " amount demage." << std::endl; 
        std::cout << "Now " << this->name << " have " << this->hit_points << " hit points" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0)
    {
        energy_points--;
        this->hit_points += amount;
        std::cout << "ClapTrap " << this->name << " get " << amount << " amount hit points" << std::endl;
        std::cout << "Now " << this->name << " have " << this->hit_points << " hit points" << std::endl; 
    }
    else
        std::cout << "ClapTrap " <<  this->name << " can't do anything" << std::endl;
}
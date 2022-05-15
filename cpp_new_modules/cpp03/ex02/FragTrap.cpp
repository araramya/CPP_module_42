#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default_SavTrap_name";
    hit_points = 100;
    energy_points = 100;
    attack_demage = 30;
    std::cout << "FRAGTRAP:: Default Constructor Called for " << name << std::endl;

}

FragTrap::FragTrap(const std::string& name)
{
    std::cout << "FRAGTRAP:: Constructor for " << name << " called" << std::endl;
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_demage = 20;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FRAGTRAP:: Copy Constructor Called" << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage = other.attack_demage;
    this->energy_points = other.energy_points;
}

FragTrap::~FragTrap()
{
    std::cout << "FRAGTRAP:: Destructor called for " << this->name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if(this == &other)
        return *this;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage =other.attack_demage;
    this->energy_points = other.energy_points;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if(this->hit_points > 0 && this->energy_points > 0) 
    {
        this->energy_points--;
        std::cout << "FragTrap " << this->name << " attacks " <<
        target << ", causing " << attack_demage << " points of demage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << this->name << " Can't do anything" << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FRAGTRAP:: positive high five request from " << this->name << std::endl;
}
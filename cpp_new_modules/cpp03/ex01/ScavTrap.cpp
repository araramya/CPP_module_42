#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Default_SavTrap_name";
    hit_points = 100;
    energy_points = 50;
    attack_demage = 20;
    std::cout << "SCAVTRAP:: Default Constructor Called for " << name << std::endl;

}

ScavTrap::ScavTrap(const std::string& name)
{
    std::cout << "SCAVTRAP:: Constructor for " << name << " called" << std::endl;
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_demage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "SCAVTRAP:: Copy Constructor Called" << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage = other.attack_demage;
    this->energy_points = other.energy_points;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SCAVTRAP:: Destructor called for " << this->name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if(this == &other)
        return *this;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->attack_demage =other.attack_demage;
    this->energy_points = other.energy_points;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->hit_points > 0 && this->energy_points > 0) 
    {
        this->energy_points--;
        std::cout << "ScavTrap " << this->name << " attacks " <<
        target << ", causing " << attack_demage << " points of demage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " Can't do anything" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "  << name << "is now in Gate keeper mode" << std::endl;
}
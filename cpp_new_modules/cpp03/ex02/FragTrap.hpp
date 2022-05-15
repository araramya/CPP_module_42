#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
     public:
        FragTrap();
        FragTrap(const std::string& name);
        ~FragTrap();
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        
        void attack(const std::string& target);
        void highFivesGuys(void);
};
#endif
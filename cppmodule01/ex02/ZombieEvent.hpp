# ifndef ZOMBIE_EVANT_HPP
# define ZOMBIE_EVANT_HPP

#include "Zombie.hpp"

class ZombieEvent 
{
    private:
            std::string type;
    public:
            void setZombieType(std::string type);
            Zombie* newZombie(std::string name);
            Zombie* randomChump();
};

#endif
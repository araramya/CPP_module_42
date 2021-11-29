#ifndef ZOMBIE_HORDE_CPP
#define ZOMBIE_HORDE_CPP

#include "Zombie.hpp"

class ZombieHorde
{
    private:
        int z_num;
        Zombie* zombuk;
    public:
        ZombieHorde(int z_num);
        ~ZombieHorde();
        //Zombie* newZombie(std::string name, std::string type);
        void announce();
        
};

#endif
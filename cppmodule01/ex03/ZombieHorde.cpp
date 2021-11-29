#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int z_num)
{
    std::string  names[10] = {"Zombella", "Zombushka", "Zombevich", "Zombaev", "Zombibi",
                              "Zombik", "Zombanush", "Zombaedov", "Zomber", "Zombulya"};
    srand(time(NULL));
    this->z_num = z_num;
    this->zombuk = new Zombie[z_num];
    for (int i = 0; i < z_num; i++)
        this->zombuk[i].setZombieName(names[rand() % 10]);
}

void ZombieHorde::announce()
{
   
    for(int i = 0; i < this->z_num; i++)
    {
      
        this->zombuk[i].announce();
    }
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "Deconstructed !!!" << std::endl;
    delete[]this->zombuk;
}
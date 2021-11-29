#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump()
{
    Zombie *zombuk;
    std::string  names[10] = {"Zombella", "Zombushka", "Zombevich", "Zombaev", "Zombibi",
                              "Zombik", "Zombanush", "Zombaedov", "Zomber", "Zombulya"};
    srand(time(NULL));
    zombuk = newZombie(names[rand() % 10]);
    zombuk->announce();
    return (zombuk);
}
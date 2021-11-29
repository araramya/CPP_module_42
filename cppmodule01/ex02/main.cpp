#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent evant;
    Zombie *zombuk;

    zombuk = new Zombie("type1", "name1");
    zombuk->announce();
    delete zombuk;

    zombuk = evant.newZombie("name2");
    zombuk->announce();
    delete zombuk;

    evant.setZombieType("type3");
    zombuk = evant.newZombie("name3");
    zombuk->announce();
    delete(zombuk);

    evant.setZombieType("typeRandom");
    zombuk  = evant.randomChump();
    delete zombuk;
}
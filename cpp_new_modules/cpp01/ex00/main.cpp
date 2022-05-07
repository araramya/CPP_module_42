#include "Zombie.hpp"

int main()
{
    Zombie my_zombie1 = Zombie();
    my_zombie1.announce();

    Zombie* my_zombie2 = new Zombie("Zombik");
    my_zombie2->announce();
    delete(my_zombie2);

    Zombie* my_zombie3;
    my_zombie3 = newZombie("Zombulya");
    delete(my_zombie3);

    randomChump("Zombuhi");
}
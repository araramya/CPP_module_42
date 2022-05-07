#include "Zombie.hpp"
#include <unistd.h>

int main()
{
    int N;
    std::string zombie_name;

    N = 7;
    zombie_name = "Zombulya";
    Zombie* my_zombies = zombieHorde(N, zombie_name); 
    for (int i = 0; i < N; i++)
        my_zombies[i].announce();
    
   delete [] my_zombies;

}

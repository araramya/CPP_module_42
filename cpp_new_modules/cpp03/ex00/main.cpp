#include "ClapTrap.hpp"
int main()
{
    ClapTrap my_clap("Clapik");
    ClapTrap my_trap("Trapik");

    my_clap.attack("Trapik");
    my_trap.takeDamage(3);
    my_trap.attack("Clapik");
    my_clap.takeDamage(4);
    my_clap.beRepaired(30);
    my_trap.beRepaired(42);
}
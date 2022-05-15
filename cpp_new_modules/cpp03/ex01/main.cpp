//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap my_clap("Clapik");
    ClapTrap my_trap("Trapik");
    ScavTrap my_scav("Slavik");

    my_clap.attack("Trapik");
    my_trap.takeDamage(3);
    my_trap.attack("Clapik");
    my_clap.takeDamage(4);
    my_clap.beRepaired(30);
    my_trap.beRepaired(42);

    my_scav.attack("ImaganaryTarget");
    my_scav.guardGate();
    my_scav.takeDamage(45);
    my_scav.beRepaired(300);
}
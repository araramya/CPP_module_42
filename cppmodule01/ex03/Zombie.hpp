# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

class Zombie
{
        private:
                std::string type;
                std::string name;
        public:
                void announce();
                void setZombieType(std::string type);
                void setZombieName(std::string name);
                Zombie();
                Zombie(std::string type, std::string name);
               ~Zombie();
};

#endif
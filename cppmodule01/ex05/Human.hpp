#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    private:
        const Brain brain;
    public:
        Human();
       const Brain &getBrain();
       const std::string identify();
       ~Human();
};
#endif
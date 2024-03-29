#ifndef BRAIN_HPP
#define BRAIN_HPP
#define ID_NUM 100
#include <string>
#include <iostream>

class Brain
{  
    
    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        std::string *getIdeas();
        std::string ideas[ID_NUM];

    
};

#endif
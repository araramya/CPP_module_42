#ifndef BRAIN_HPP
#define BRAIN_HPP
#define ID_NUM 100
#include <string>
#include <iostream>

class Brain
{  
    private:
        std::string ideas[ID_NUM];
    
    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        std::string *getIdeas();
    
};

#endif
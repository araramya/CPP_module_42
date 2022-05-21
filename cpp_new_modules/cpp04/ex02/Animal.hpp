#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{   
    protected:
        std::string type;

    
        Animal();
        virtual ~Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
    public:
        std::string  getType() const;
        virtual void makeSound() const = 0;
};

#endif
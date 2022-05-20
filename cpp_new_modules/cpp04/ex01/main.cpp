#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMAL_COUNT 2

int main()
{
    Animal *animal[ANIMAL_COUNT];
    for (int i = 0; i < ANIMAL_COUNT; i++)
        i % 2 != 0 ? animal[i] = new Dog() : animal[i] = new Cat();
    for (int i = 0; i < ANIMAL_COUNT; i++)
        delete animal[i];    
}
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
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; //should not create a leak
    delete i;

     Dog basic;
     basic.setIdea("HAF HAF HAF\n", 0);
     Dog tmp;
     tmp = basic;
     tmp.getIdea(0);
     tmp.setIdea("HELLP\n", 1);
     basic.getIdea(1);

     return 0;
}
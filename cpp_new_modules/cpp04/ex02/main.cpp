#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMAL_COUNT 2

int main()
{
    //const Animal* meta = new Animal();
    //Animal test; compilation error
    const Dog* j = new Dog();
    const Cat* i = new Cat();

    //std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    //meta->makeSound();
    delete i;
    delete j;
}
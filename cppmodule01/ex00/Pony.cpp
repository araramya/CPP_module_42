# include "Pony.hpp"

Pony::Pony(std::string name, std::string hair_color)
{
    this->name = name;
    this->hair_color = hair_color;
    std::cout << this->name << " pony was created, and its hair is " << this->hair_color << std::endl;
}

Pony::~Pony()
{
    std::cout << "CONGRATULATIONS YOU DESTROYED PONY :( Its name was " << this->name <<" and its hairs was " << this->hair_color  << std::endl;
}

void Pony::intro()
{
    std::cout << "Hello  my name is "<< this->name << "and I have " << this->hair_color << " hairs" << std::endl;
}

void Pony::magic()
{
    std::cout << "I am not a magician, I AM A PONY!!! "<< std::endl;
}
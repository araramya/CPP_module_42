# ifndef PHONY_HPP
# define PHONY_HPP
# include <iostream>
# include <string>

class Pony
{
    private:
        std::string name;
        std::string hair_color;
    public:
        Pony(std::string name, std::string hair_color);
        ~Pony();
        void intro();
        void magic();
};

#endif
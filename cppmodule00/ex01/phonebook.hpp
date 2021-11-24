#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>  
#include <ctype.h>

class Phonebook
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    
    public:
        std::string ft_get_first_name();
        void        ft_set_first_name(std::string first_name);
        std::string ft_get_last_name();
        void        ft_set_last_name(std::string last_name);
        std::string ft_get_nickname();
        void        ft_set_nickname(std::string nickname);
        std::string ft_get_phone_number();
        void        ft_set_phone_number(std::string phone_number);
        std::string ft_get_darkest_secret();
        void        ft_set_darkest_secret(std::string darkest_secret);
        void        ft_print_all();
        void        ft_print(int count);
};

#endif
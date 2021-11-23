#include "phonebook.hpp"
#include <iomanip>

std::string Phonebook::ft_get_first_name()
{
    return (this->first_name);
}

void Phonebook::ft_set_first_name(std:: string first_name)
{
    this->first_name = first_name;
}

std::string Phonebook::ft_get_last_name()
{
    return (this->last_name);
}

void Phonebook::ft_set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

std::string Phonebook:: ft_get_nickname()
{
    return (this->nickname);
}

void Phonebook::ft_set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

std::string Phonebook::ft_get_phone_number()
{
    return (this->phone_number);
}

void Phonebook:: ft_set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

std::string Phonebook:: ft_get_darkest_secret()
{
    return (this->darkest_secret);
}

void Phonebook:: ft_set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

void Phonebook::ft_print_all()
{
    std::cout << "First name: " << this->first_name << std::endl;
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phone_number << std::endl;
    std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void check_print(std::string str)
{
    if(str.length() > 10)
    {
        for(int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << '.';
    }
    else
        {
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << str;
        }
}

void Phonebook::ft_print(int count)
{
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << count << "|";
    check_print(this->first_name);
    std::cout << '|';
    check_print(this->last_name);
    std::cout << '|';
    check_print(this->nickname);
    std::cout << '|';
    std::cout << std::endl;
} 
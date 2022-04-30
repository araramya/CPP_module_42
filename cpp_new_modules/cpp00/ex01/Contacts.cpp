#include "Contacts.hpp"

void Contacts::SetContact()
{
    std::cout << "First Name : ";
    std::cin >> FirstName;
    std::cout << "Last Name : ";
    std::cin >> LastName;
    std::cout << "Nickname : ";
    std::cin >> Nickname;
    std::cout << "Phone Number : ";
    std::cin >> PhoneNumber;
    std::cout << "Darkest Secret : ";
    std::cin >> DarkestSecret;
}

void Contacts::CheckPrint(std::string str)
{
    if(str.length() > 10)
    {
        for(int  i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    }
    else
    {
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << str;
    }
}

void Contacts::PrintContact(int i)
{

    std::cout << std::setfill(' ') <<std::setw(10);
    std::cout << i << '|';
    CheckPrint(this->FirstName);
    std::cout << '|';
    CheckPrint(this->LastName);
    std::cout << '|';
    CheckPrint(this->Nickname);
    std::cout << '|';
    std::cout << std::endl;
}

void Contacts::PrintContactFull()
{
    std::cout << "First Name : " << this->FirstName << std::endl;
    std::cout << "Last Name : " << this->LastName << std:: endl; 
    std::cout << "Nickname : " << this->Nickname << std::endl;
    std::cout << "Phone Number : " << this->PhoneNumber << std::endl;
    std::cout << "Darkest Secret : " << this->DarkestSecret << std::endl;
}
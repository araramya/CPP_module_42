#include "PhoneBook.hpp"

std::string Contact::getFirstName()
{
    return this->FirstName;
}

std::string Contact::getLastName()
{
    return this->LastName;    
}

std::string Contact::getNickname()
{
    return this->Nickname;    
}

std::string Contact::getPhoneNumber()
{
    return this->PhoneNumber;    
}

std::string Contact::getDarkestSecret()
{
    return this->DarkestSecret;
}

void Contact::setFirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}

void Contact::setLastName(std::string LastName)
{
    this->LastName = LastName;
}

void Contact::setNickname(std::string Nickname)
{
    this->Nickname = Nickname;
}

void Contact::setPhoneNumber(std::string PhoneBook)
{
    this->PhoneNumber = PhoneBook;
}

void Contact::setDarkestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}




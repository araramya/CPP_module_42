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

Contact PhoneBook::getNewContact(int index)
{
    return this->contacts[index];
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

void PhoneBook::setNewContact(int index, Contact newContact)
{
    this->contacts[index] = newContact;
}

Contact PhoneBook::AddContact()
{
    Contact new_cont;
    std::string temp;

    std::cout << "First name: ";
    std::cin >> temp;
    new_cont.setFirstName(temp);

    std::cout << "Last name: ";
    std::cin >> temp;
    new_cont.setLastName(temp);
    
    std::cout << "Nickname: ";
    std::cin >> temp;
    new_cont.setNickname(temp);
    
    std::cout << "Phone Number: ";
    std::cin >> temp;
    new_cont.setPhoneNumber(temp);
    
    std::cout <<  "Darkest Secret: ";
    std::cin >> temp;
    new_cont.setDarkestSecret(temp);
    

    new_cont.setDarkestSecret(temp);
    
    return (new_cont);
}

void PhoneBook::printContact(int i)
{
    std::cout << "___FIRST_NAME___" << this->contacts[i].getFirstName() << std::endl;
    std::cout << "___LAST_NAME___" << this->contacts[i].getLastName() << std::endl;
    std::cout << "___NICKNAME___" << this->contacts[i].getNickname() << std::endl;
    std::cout << "___PHONE_NUMBER___" << this->contacts[i].getPhoneNumber() << std::endl;    
    std::cout << "___DARKEST_SECRET___" << this->contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::printAll()
{
    int i;
    i = 0;
    std::cout << "__CONTACT_INDEX___" <<this->ContactIndex << std::endl;
    while(i <= this->ContactIndex)
    {
        printContact();
        i++;
    }
}
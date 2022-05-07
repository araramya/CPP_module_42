#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->ContIndex = 0;
    this->ContCount = 0;
}

void PhoneBook::AddContact()
{
    MyContacts[ContIndex].SetContact();
    ContIndex++;
    if(ContCount < MAX_CONT_NUM )
        ContCount++;
    if(ContIndex == MAX_CONT_NUM)
        ContIndex = 0;
}

void PhoneBook::PrintPhoneBook()
{
    int i;
    int InputIndex;

    i = -1;
    std::cout << std::setfill(' ') << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
    while(++i < ContCount)
    {
        this->MyContacts[i].PrintContact(i);   
    }
    std::cout << "Choose Index if you want see more information about contact." << std::endl;
    std::cin >> InputIndex;
    if( InputIndex < ContCount && (!std::cin.fail())) 
        this->MyContacts[InputIndex].PrintContactFull();
    
    else
     {
        std::cout << "Make sure you see Index in list!" << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return ;
     }
    
}
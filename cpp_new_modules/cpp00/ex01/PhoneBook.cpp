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
    ContCount++;
    if(ContIndex == MAX_CONT_NUM)
        ContIndex = 0;
}

void PhoneBook::ChooseIndex(int Index)
{

}

void PhoneBook::PrintPhoneBook()
{
    int i;
    int ContIndex;

    i = 0;
    std::cout << std::setfill(' ') << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
    while(i < ContCount)
    {
        this->MyContacts[i].PrintContact(i);
        i++;
    }
    std::cout << "Choose Index if you want see more information about contact." << std::endl;
    std::cin >> ContIndex;
    if(ContIndex > ContCount  || ContIndex < 0)
        std::cout << "Make sure you see Index in list!" << std::endl;
    else
        this->MyContacts[ContIndex].PrintContactFull();
    
}
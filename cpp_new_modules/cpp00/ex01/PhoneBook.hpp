#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <string>
#define MAX_CONT_NUM 8

class PhoneBook
{
    private:
        int      ContIndex;
        int      ContCount;
        Contacts MyContacts[MAX_CONT_NUM];
        void ChooseIndex(int Index);
    
    public:
        PhoneBook();
        void AddContact();
        void PrintPhoneBook();
};

#endif
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contacts
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
        
        void CheckPrint(std::string str);
    
    public:
        void SetContact();
        void PrintContact(int index);
        void PrintContactFull();
};      
#endif
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    
    public:
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();

        void        setFirstName(std::string FirstName);
        void        setLastName(std::string LastName);
        void        setNickname(std::string Nickname);
        void        setPhoneNumber(std::string PhoneNumber);
        void        setDarkestSecret(std::string DarkestSecret);
};

class PhoneBook
{
    private:
        Contact contacts[8];
    
    public:
        Contact AddContact();
        Contact getNewContact(int index);
        void    setNewContact(int index, Contact newContact);
        void    printContact(int i);
        void    printAll();     
        void    SearchContact();
        void    Exit();

    public:
        int ContactIndex;
};

#endif
#include "PhoneBook.hpp"

int main()
{
    PhoneBook myPhonebook;
    int       contact_count = 0;
    std::string input;

    std::cout << "Welcome to PHONEBOOK!!!" << std::endl;
    std::cout << "You have three operations ADD SEARCH EXIT" << std::endl;
    while(1)
    {
        std::cout << "What you will choose >> ";
        std::cin >> input;
        if (input == "ADD")
        {
            if (contact_count == 8)
            {
                //special case
            } 
            else
            {
                myPhonebook.AddContact();
            }
        }
        else if (input == "SEARCH")
        {}
          //  myPhonebook.SearchContact();
        else if (input == "EXIT")
        {}
           // myPhonebook.Exit();
        else 
            std::cout << "" << 
    }
    return (0);
}
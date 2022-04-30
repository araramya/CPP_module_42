#include "PhoneBook.hpp"

int main()
{
    PhoneBook   myPhonebook;
    int         contact_count;
    int         oldestOne;
    std::string input;

    myPhonebook.ContactIndex = 0;
    contact_count = 0;
    oldestOne = 0;
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
                myPhonebook.ContactIndex = 0;
                myPhonebook.setNewContact(oldestOne, myPhonebook.AddContact());
                myPhonebook.printAll();
                oldestOne++;
                if(oldestOne == 8)
                    oldestOne = 0;
            } 
            else
            {
                myPhonebook.setNewContact(myPhonebook.ContactIndex, myPhonebook.AddContact());
                myPhonebook.printAll();
                myPhonebook.ContactIndex++;
            }
        }
        else if (input == "SEARCH")
        {}
          //  myPhonebook.SearchContact();
        else if (input == "EXIT")
        {}
           // myPhonebook.Exit();
        else 
            std::cout << "ADD, SEARCH, EXIT it isn't so hard to remeber" << std::endl; 
    }
    return (0);
}
#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    std::string usrAnswear;
    PhoneBook MyPhoneBook;

    std::cout << "WELCOME TO PHONEBOOK!!!!!" << std::endl;
    std::cout << "You have three options ADD SEARCH and EXIT " << std::endl;
    while(1)
    {
        std::cout << "What you will choose ?" << std::endl;
        std::cin >> usrAnswear;
        if (usrAnswear == "ADD")
        {
            MyPhoneBook.AddContact();
        }
        else if (usrAnswear == "SEARCH")
        {
            MyPhoneBook.PrintPhoneBook();
        }
        else if (usrAnswear == "EXIT")
        {
            std::cout << "Bye )" << std::endl;
            exit(0);
        }
        else
        {
            std::cout << "Yeah of course... You wanna try something new ?" << std::endl;
            std::cout << "Guess what ???" <<std::endl;
            std::cout << "There is NOTHING .... nothing..." << std::endl;
        }
    }
    return (0);
}
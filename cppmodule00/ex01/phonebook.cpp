#include "phonebook.hpp"

Phonebook ft_add()
{
  
    Phonebook new_cont;
    std::string temp;

    std::cout << "First name: ";
    std::cin >> temp;
    new_cont.ft_set_first_name(temp);
    
    std::cout << "Last name: ";
    std::cin >>temp;
    new_cont.ft_set_last_name(temp);

    std:: cout << "Nickname: ";
    std::cin >>temp;
    new_cont.ft_set_nickname(temp);

    std:: cout << "Phone number: ";
    std::cin >>temp;
    new_cont.ft_set_phone_number(temp);

    std:: cout << "Darkest secret: ";
    std::cin >>temp;
    new_cont.ft_set_darkest_secret(temp);

    
    return (new_cont);


}
void ft_search(Phonebook contact[8], int contact_count)
{
    int id;

     if(contact_count == 0)
     {
         std::cout << "Your contact list is empty" << std::endl;
         return ;
     }

    std::cout << std::setfill (' ') << std::setw (10) << "index";
    std::cout << '|';
    std::cout << std::setfill(' ') << std::setw(10) << "first name";
    std::cout << '|';
    std::cout << std::setfill(' ') << std::setw(10) << "last name";
    std::cout << '|';
    std::cout << std::setfill(' ') << std::setw(10) << "nickname";
    std::cout << '|' << std::endl;

    for(int i = 0; i < contact_count; i++)
        contact[i].ft_print(i);
    std::cout << "Input the id number: ";
    std::cin >> id;
    if(id < 0 || id > 7 || id > contact_count || std::cin.fail())
    {
    
         std::cout << "Invalid Argument, contact not found" <<std::endl;
         std::cin.clear();
         std::cin.ignore(10000, '\n');
         return ;
    }
    else
            contact[id].ft_print_all();
}

void ft_exit()
{
    std::cout << "BYE :)";
    exit(0);
}

int main()
{
    Phonebook   contacts[8];
    int         contact_count = 0;
    std::string input;

    std::cout <<"WELCOME TO THE PHONEBOOK" << std::endl
    <<"You have three options ADD, SEARCH and EXIT"<<std::endl;
    
    while(1)
    {
       // std::cin.clear();
        std::cout << "What you will choose > ";
        std::cin >> input;
        if(input == "ADD")
        {
            if(contact_count == 8)
            {
                std::cout << "The last contact will be loosed" <<std::endl;
                contacts[7] = ft_add();
            }
            else
            {
                contacts[contact_count] = ft_add();
                contact_count++;
            }
        }
        else if(input == "SEARCH")
            ft_search(contacts, contact_count);
        else if (input == "EXIT")
            ft_exit();
    }
}
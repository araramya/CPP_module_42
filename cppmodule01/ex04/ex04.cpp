# include <iostream>
# include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_pointer;
    std::string &str_ref = str; 
    str_pointer = &str;

    std::cout << *str_pointer << std::endl;
    std::cout << str_ref << std::endl;

}
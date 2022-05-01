#include <string>
#include <iostream>

int main()
{
    std::string stringVAL = "HI THIS IS BRAIN";
    std::string* stringPTR = &stringVAL;
    std::string& stringREF = stringVAL;

    std::cout << "The memory address of stringVAL : " << &stringVAL << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "The value of the string variable : " << stringVAL << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}   
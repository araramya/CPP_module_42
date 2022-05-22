#include <iostream>
#include <ctype.h>
#include <cstring>
#include <limits>

void char_convert(char * str)
{
    try
    {
        // if(str[0] && strlen(str) == 1 && isalpha(str[0]))
        // {
        //     std::cout << "char: " << str <<std::endl;
        //     return;
        // }

        char c = static_cast<char>(std::stoi(str));
        if(isprint(c))
            std::cout << "char: " << c << std::endl;
        else
            std::cout << "char: Non Printable!" << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cout << "char: impossible" << std::endl;
    }
}

bool is_num(char *str)
{
    for (int i = 0; str[i]; i++)
        if (std::isdigit(str[i]) == 0)
            return false;
    return true;
}

void int_convert(char *str)
{
    try
    {
        if(str[0] && strlen(str) == 1 && isalpha(str[0]))
        {
            std::cout << "int: "  << static_cast<int> (str[0]) << std::endl;
            return;
        }
        int num = static_cast<int>(std::stoi(str));
        std::cout << "int: " << num << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "int: impossible" << std::endl;
    }
}

void double_convert(char *str)
{
    try
    {
        if(str[0] && strlen(str) == 1 && isalpha(str[0]))
        {
            std::cout << "double" << static_cast<double>(str[0]) << ".0" << std::endl;
            return;
        }
        double num = static_cast<double>(std::stod(str));
        if (num == std::numeric_limits<float>::infinity())
            std::cout << "double: " << "+inf" << std::endl;
        else if( (long double)num == (int) num)
            std::cout << "double: " << num << ".0" << std::endl;
        else
            std::cout << "double: " << num << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "double: nan" << std::endl;
    }
}

void float_convert(char *str)
{
	try
	{
		if (str[0] && strlen(str) == 1 && isalpha(str[0]))
		{
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
			return ;
		}
		float nb = static_cast<float>(std::stof(str));
		if (nb == std::numeric_limits<float>::infinity())
			std::cout << "float: " << "+inff" << std::endl;
		else if ((long double)nb == (int)nb)
        	std::cout << "float: " << nb << ".0f" << std::endl;
		else
			std::cout << "float: " << nb << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float: nanf" << std::endl;
	}
}

void scaliar_conversation(char* str)
{
    char_convert(str);
    int_convert(str);
    float_convert(str);
    double_convert(str);
}

int main(int argc, char **argv)
{
    if(argc != 2)
        std::cout << "Error: Invalid Argument!" << std::endl;
    else
        scaliar_conversation(argv[1]);
    return (0);
}




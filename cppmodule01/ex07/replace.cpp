
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

std::string *ft_read(char *f_name)
{
    std::ifstream file;
    std::string *str;
    int check;

    file.open(f_name);
    if(file.fail())
    {
        std::cout << "Can't open file" << std::endl;
        return NULL;
    }
    str = new std::string;
    
     while((check = file.get()) != EOF)
    {
        *str += check; 
    }
    file.close();
    return (str);
} 

void ft_write(std::string f_name, std::string &str)
{
    std::ofstream file;
    file.open(f_name);
    if(file.fail())
    {
        std::cout << "Can't open file" << std::endl;
        return;
    }
    file << str;
    file.close();
}

void ft_replace(char *f_name, char* str_old, char *str_new)
{
    std::string *str;
    std::string new_fname;
    size_t find;
    if(!(str = ft_read(f_name)))
        return;
    find = 0;
    while((find = str->find(str_old, find ? find + strlen(str_new) : 0))
    != std::string::npos)
    str->replace(find, strlen(str_old), str_new);

    new_fname = f_name;
    new_fname.append(".replace");
    ft_write(new_fname, *str);
    delete str;
}

int main(int argc, char **argv)
{
    if(argc != 4 || argv[2] == "" || argv[3] == "")
        std::cout << "Wrong arguments!";
    else
    {
        ft_replace(argv[1], argv[2], argv[3]);
        return (0);
    }
}

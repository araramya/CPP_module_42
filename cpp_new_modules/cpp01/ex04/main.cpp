#include <iostream>
#include <fstream>
#include <string>

void read_and_replace(char **argv, std::ifstream& file_in, std::ofstream& file_out, std::string replace_file_name)
{
    std::string search_string;
    std::string replace_string;
    std::string temp_str;
    std::size_t index;

    search_string = argv[2];
    replace_string = argv[3];

    if(search_string.length() && replace_string.length())
    {   
        file_out.open(replace_file_name);
        if(file_out.fail())
        {
            std::cout << "Error: Can't open file for writing." << std::endl;
            return ;
        }
        else
        {
            while(std::getline(file_in, temp_str))
            {
                
                while( (index = temp_str.find(search_string)) != std::string::npos )
                {
                    temp_str.erase(index, search_string.length());
                    temp_str.insert(index, replace_string);
                }
                file_out << temp_str << std::endl;
            }
            file_out.close();
            return ;
        }
    }
    else
    {
        std::cout << "Error: Invalid paameters." << std::endl;
        return ;
    }

}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::string filename;
        std::string replace_file_name;
        std::ifstream file_in;
        std::ofstream file_out;

        filename = argv[1];
        replace_file_name = filename + ".replace";

        file_in.open(filename);
        if(!file_in.fail() || !filename.length())
        {
            read_and_replace(argv, file_in, file_out, replace_file_name);
            file_in.close();
        }
        else
        {
            std::cout << "Can't open the filea for reading." << std::endl;
            return 0;
        }
    }
    else
    {
        std::cout << "Error: Invalid arguments count." << std::endl;
        return 0;   
    }
}
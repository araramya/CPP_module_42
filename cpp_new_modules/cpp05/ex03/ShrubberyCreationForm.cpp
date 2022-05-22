#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default ShrubberyCreationForm Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, false, 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other.target, false, 145, 137)
{
    std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
    if (this != &other)
    {
        this->target = other.getTarget();
    }
    *this = other;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    std::cout << "ShrubberyCreationForm Assignation Called" << std::endl;
    if (this != &other)
    {
        this->target = other.getTarget();
        return (*this);
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    std::ofstream myFile;

    Form::execute(executor);
    myFile.open(target + "_shrubbery");
    if (!myFile.is_open() || myFile.bad())
        throw ShrubberyCreationForm::ProblemFileException();
    myFile << "          .     .  .      +     .      .          ." << std::endl;
    myFile << "     .       .      .     #       .           ." << std::endl;
    myFile << "        .      .         ###            .      .      ." << std::endl;
    myFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
    myFile << "          .      . \"####\"###\"####\"  ." << std::endl;
    myFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
    myFile << "  .             \"#########\"#########\"        .        ." << std::endl;
    myFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
    myFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
    myFile << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
    myFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
    myFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
    myFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
    myFile << "            .     \"      000      \"    .     ." << std::endl;
    myFile << "       .         .   .   000     .        .       ." << std::endl;
    myFile << ".. .. ..................00000........................ ...... ..." << std::endl;
    myFile.close();
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (target);
}

const char* ShrubberyCreationForm::ProblemFileException::what() const throw()
{
    return ("Can't Open the File");
}
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructor Called" << std::endl;
}

Intern::Intern(Intern const &src)
{
    std::cout << "Intern Copy Constructor Called" << std::endl;
    *this = src;
}

Intern & Intern::operator=(Intern const &rhs)
{
    std::cout << "Intern Assignation Called" << std::endl;
    (void)rhs;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern Destructor Called" << std::endl;
}

Form * Intern::makeForm(std::string name_form, std::string target)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    Form *form[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    int idx = -1;
    for (int i = 0; i < 3; i++)
    {
        if (name_form == forms[i])
        {
            std::cout << "Intern creates " << name_form << "\n";
            idx = i;
        }
        else
            delete form[i];
    }
    if (idx == -1)
        throw (FormNotFound());
    return (form[idx]);
}

const char* Intern::FormNotFound::what() const throw()
{
    return "Form not found";
}
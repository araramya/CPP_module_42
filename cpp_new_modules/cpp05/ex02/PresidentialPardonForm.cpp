#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default PresidentialPardonForm Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, false, 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form(other.target, false, 25, 5)
{
    std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
    if (this != &other)
    {
        this->target = other.getTarget();
    }
    *this = other;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    std::cout << "PresidentialPardonForm Assignation Called" << std::endl;
    if (this != &rhs)
    {
        this->target = rhs.getTarget();
        return (*this);
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);

    std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox.\n";
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (target);
}
#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default RobotomyRequestForm Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, false, 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other.target, false, 72, 45)
{
    std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
    if (this != &other)
    {
        this->target = other.getTarget();
    }
    *this = other;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    std::cout << "RobotomyRequestForm Assignation Called" << std::endl;
    if (this != &rhs)
    {
        this->target = rhs.getTarget();
        return (*this);
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);

    int random_nb;

    random_nb = rand() % 100; // to get the range from 0 to 99

    if (random_nb > 50)
    {
        std::cout << "<" << getTarget() << "> has been robotomized successfully\n";
    }
    else
        std::cout << "<" << getTarget() << "> has been failed \n";
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (target);
}
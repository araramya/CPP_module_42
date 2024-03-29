#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name( name )
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
    std::cout << "Not Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    if(other.grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(other.grade > 150)
        throw Bureaucrat::GradeTooLowException();
    *this = other;
    std::cout << "Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other)
{
    if(this == &other)
        return *this;
    
    if(other.grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if(other.grade > 150)
        throw Bureaucrat::GradeTooHighException();
    grade = other.grade;
    std::cout << "Assignement operator called" << std::endl;
    return *this;
}

void Bureaucrat::IncrementGrade()
{
    if(grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
    std::cout << "Incremented" << std::endl;
}

void Bureaucrat::DecrementGrade()
{
    if(grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
    std::cout << "Decremented" << std::endl;
}

std::string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade()
{
    return grade;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat& r_buro )
{
    os << r_buro.getName() << ", bureaucrat grade " << 
        r_buro.getGrade() << ".";
    return os;
}

  const char* Bureaucrat::GradeTooLowException::what() const throw()
  {
      return "Grade Too Low Exception";
  }

  const char* Bureaucrat::GradeTooHighException::what() const throw()
  {
      return "Grade Too High Exception";
  }

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(std::string s_name, bool is_signed, int d_grd_to_sign, int d_grd_to_execute) :
s_name(s_name),
is_signed(is_signed),
d_grd_to_sign(d_grd_to_sign),
d_grd_to_execute(d_grd_to_execute)
{
    if(d_grd_to_execute < 1 || d_grd_to_sign < 1)
        throw Form::GradeTooLowException();
    else if(d_grd_to_execute > 150 || d_grd_to_sign > 150)
        throw Form::GradeTooHighException();
    std::cout << "FORM Constructor called" << std::endl;
}

 Form :: Form(const Form& other):
 s_name(other.s_name),
 is_signed(other.is_signed),
 d_grd_to_execute(other.d_grd_to_execute),
 d_grd_to_sign(other.d_grd_to_sign)
 {
    if(other.d_grd_to_execute < 1 || other.d_grd_to_sign < 1)
        throw Form::GradeTooLowException();
    else if(other.d_grd_to_execute > 150 || other.d_grd_to_sign > 150)
        throw Form::GradeTooHighException();
    std::cout << "FORM Copy Constructor called";
 }

 Form& Form::operator=(const Form& other)
 {
    if(this == &other)
        return *this;
    if(other.d_grd_to_execute < 1 || other.d_grd_to_sign < 1)
        throw Form::GradeTooLowException();
    else if(other.d_grd_to_execute > 150 || other.d_grd_to_sign > 150)
        throw Form::GradeTooLowException();
    
    *this = other;
    return *this;
 }

 Form::~Form()
 {
     std::cout << "FORM Destructor called" << std::endl;
 }

 const std::string Form::getName() 
 {
     return s_name;
 }

 bool Form::isSigned()
 {
     return is_signed;
 }

 const int Form::getGradeToSign()
 {
    return d_grd_to_sign;     
 }

 const int Form::getGradeToExecute()
 {
     return d_grd_to_execute;
 }

 void Form::beSigned(Bureaucrat& burrecrat)
 {
    if(burrecrat.getGrade() <= d_grd_to_execute )
        is_signed = true;
    else
        throw Form::GradeTooLowException();
 }

std::ostream& operator<< (std::ostream os,  Form& form)
{
    os<< "Form: " << form.getName();
    if(form.isSigned())
        os << " signed";
    else
        os << " not signet";
    return os;
}

const char* Form::GradeTooLowException::what() const throw()
{
  return "Grade Too Low Exception";
}

const char* Form::GradeTooHighException::what() const throw()
{ 
    return "Grade Too High Exception";
}

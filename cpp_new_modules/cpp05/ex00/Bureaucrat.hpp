#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(Bureaucrat const &other);
        void IncrementGrade();
        void DecrementGrade();
        std::string getName();
        int getGrade();
        ~Bureaucrat();

        class GradeTooLowException : public std::exception
        {
            public:
               virtual const char* what() const throw();
        };
        
        class GradeTooHighException : public std::exception
        {       
            public:
                virtual const char* what() const throw();
        };

};
std::ostream& operator<<(std::ostream &os, Bureaucrat& r_buro );

#endif
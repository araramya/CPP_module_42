#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Bureaucrat;
class Form
{
    private:
        const std::string s_name;
        bool is_signed;
        const int d_grd_to_sign;
        const int d_grd_to_execute;
    
    public:
        Form();
        Form(std::string s_name, bool is_signed, int d_grd_to_sign, int d_grd_to_execute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        
        virtual ~Form();

        //Getters
        std::string getName();
        bool              isSigned();
        int         getGradeToSign();
        int         getGradeToExecute() const; // just to not get compile errors )

        //Required functions
        void beSigned(Bureaucrat& burrecrat);
        virtual void execute(Bureaucrat const &buro) const = 0; //Class is Abstract now

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

        class GradeNotSigned : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream &os, Form& form );

#endif
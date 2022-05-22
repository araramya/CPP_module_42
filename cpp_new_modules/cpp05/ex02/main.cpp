#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "-----Shrubbery Test-----" << std::endl;
    try
    {
        Bureaucrat buro1("Karine", 24);
        ShrubberyCreationForm s_form("TREE");
        
        s_form.beSigned(buro1);
        std::cout << s_form;
        buro1.executeForm(s_form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----END Shrubbery Test-----" << std::endl;
    
    std::cout<<std::endl;
    
    std::cout << "-----  Robotomy Test   -----" << std::endl;
    try
    {
        Bureaucrat buro2("Larvert", 1);
        RobotomyRequestForm r_form("ROBOT_FORM");

        r_form.beSigned(buro2);
        std::cout << r_form;
        buro2.executeForm(r_form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----END Robotomy Test -----" << std::endl;
    
    std::cout << std::endl;

    std::cout << "-----  Presidential Test   -----" << std::endl;
    try
    {
        Bureaucrat buro3("Obama", 2);
        // Bureaucrat bt("Bur_Nouha", 2);
        PresidentialPardonForm p_form("FORMALNO");

        p_form.beSigned(buro3);
        std::cout << p_form;
        buro3.executeForm(p_form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----END Presidential Test -----" << std::endl;
    return (0);
}
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        //RIGHT EXAMPLE
        Bureaucrat buro1("Ashot", 3);
        Form       form1("FORM_NO1", false, 5, 1);
    
        std::cout << buro1 << std::endl;
        std::cout << form1 << std::endl;
        buro1.signForm(form1);
        
        //WRONG EXAMPLE
        Form form2("FORM_NO2", false, 1, 1);

        std::cout << form2 << std::endl;

    }
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // RIGHT TESTCASE
        Bureaucrat right("Buro", 12);
        right.IncrementGrade();
        std::cout << right << std::endl;
        right.DecrementGrade();
        std::cout << right << std::endl;

        //WRONG TASTCASE
        Bureaucrat wrong("Wrongik", 151);
        wrong.IncrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

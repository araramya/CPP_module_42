#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    	try {
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat buro("Bughalter", 34);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		//rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf->beSigned( buro );
		buro.executeForm( *rrf );
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
    system("leaks intern");
	return (0);
}
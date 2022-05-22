#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>
#include <exception>

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		Intern& operator=(Intern const &rhs);
		~Intern();
        Form * makeForm(std::string name_form, std::string target);
		class FormNotFound : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
#endif
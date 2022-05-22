#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>
#include <exception>

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;
		std::string getTarget(void) const;

		class ProblemFileException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

#endif
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern	intern;
	Form	*forma;

	try
	{
		forma = intern.makeForm("shrubbery create", "Shrubbery");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Form	*forma2;
	try
	{
		forma2 = intern.makeForm("shrubbery creation", "Shrubbery");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete forma;
	delete forma2;
}
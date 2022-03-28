#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	std::cout << "TEST ShrubberyCreationForm" << std::endl;
	ShrubberyCreationForm form("picul");
	Bureaucrat mikl("mikl", 145);
	
	std::cout << mikl << std::endl;

	std::cout << form << std::endl;

	mikl.executeForm(form);
	try
	{
		mikl.signForm(&form);
		mikl.increaseGrade(8);
		std::cout << mikl << std::endl;
		mikl.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	
	std::cout << "TEST RobotomyRequestForm" << std::endl;

	RobotomyRequestForm atom("atom");
	Bureaucrat cat("cat", 46);
	
	std::cout << cat << std::endl;

	std::cout << atom << std::endl;
	cat.executeForm(atom);
	try
	{
		cat.decreseGrade(26);
		cat.signForm(&atom);
		//std::cout << cat << std::endl;
		cat.increaseGrade(27);
		cat.executeForm(atom);
		//cat.executeForm(atom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << std::endl;
	
	std::cout << "TEST PresidentialPardonForm" << std::endl;
	Bureaucrat zhuk("zhuk", 6);
	PresidentialPardonForm berduberdy("Berdu BErdy Muhamedov");
	
	std::cout << zhuk << std::endl;

	std::cout << berduberdy << std::endl;
	zhuk.executeForm(berduberdy);
	try
	{
		zhuk.increaseGrade(100);
		std::cout << zhuk << std::endl;
		zhuk.executeForm(berduberdy);
		zhuk.signForm(&berduberdy);
		zhuk.executeForm(berduberdy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}

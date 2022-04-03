#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &object)
{
	*this = object;
}

Intern& Intern::operator=(const Intern &object)
{
	if (this == &object)
		return (*this);
	return (*this);
}

Intern::InternException::InternException()
{
	_error = "No such form name!";
}

const char*	Intern::InternException::what() const throw()
{
	return (_error.c_str());
}

void	Intern::checkFormName(std::string &check) const
{
	if (check != ROBOTOMY_REQUEST && check != SHRUBBERY_CREATION
		&& check != PRESIDENTIAL_PARDON)
		throw InternException();
}

Form*	Intern::robotomy(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::shrubbery(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::presidential(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string form_name, std::string target)
{
	Form*	ret = 0;

	std::string	form_names[AMOUNT_BASE_FORMS] = {ROBOTOMY_REQUEST, SHRUBBERY_CREATION, PRESIDENTIAL_PARDON};
	Form*	(Intern::*func_ptr[AMOUNT_BASE_FORMS])(std::string &target) = {&Intern::robotomy, &Intern::shrubbery,
		&Intern::presidential};
	try
	{
		checkFormName(form_name);
		for (int i = 0; i < AMOUNT_BASE_FORMS; i++)
		{
			if (form_names[i] == form_name)
			{
				switch (i)
				{
				case 0:
					ret = (this->*func_ptr[0])(target);
					break;
				case 1:
					ret = (this->*func_ptr[1])(target);
					break;
				case 2:
					ret = (this->*func_ptr[2])(target);
					break;
				default:
					break;
				}
				std::cout << "Intern creates " << ret->getForm() << std::endl;
			}
		}		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (ret);
}

Intern::InternException::~InternException() throw() {}

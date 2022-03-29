#ifndef INTERN_HPP

#define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

# ifndef AMOUNT_BASE_FORMS
#  define AMOUNT_BASE_FORMS 3
# endif

# ifndef ROBOTOMY_REQUEST
#  define ROBOTOMY_REQUEST "robotomy request"
# endif

# ifndef SHRUBBERY_CREATION
#  define SHRUBBERY_CREATION "shrubbery creation"
# endif

# ifndef PRESIDENTIAL_PARDON
#  define PRESIDENTIAL_PARDON "presidential pardon"
# endif

class Intern
{
private:
	Form*	robotomy(std::string &target);
	Form*	shrubbery(std::string &target);
	Form*	presidential(std::string &target);
public:
	Intern(/* args */);
	~Intern();
	Intern(const Intern &object);
	Intern& operator=(const Intern &object);

	Form*	makeForm(std::string form_name, std::string target);
	void	checkFormName(std::string &check) const;

	class InternException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		InternException(/* args */);
		virtual const char*	what() const throw();
	};
};

#endif
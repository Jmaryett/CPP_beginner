#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object) : Form(object)
{
	*this = object;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	if (this == &object)
		return (*this);
	_target = object._target;
	return (*this);
}

const char*	PresidentialPardonForm::CannotExecException::what() const throw()
{
	return (_error.c_str());
}

PresidentialPardonForm::CannotExecException::CannotExecException()
{
	_error = "(PresidentialPardonForm)Cannot execute!\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!PresidentialPardonForm::ifSigned() || executor.getGrade() != PresidentialPardonForm::getGrade(1))
		throw PresidentialPardonForm::CannotExecException();
	PresidentialPardonForm::pardon();
}

void	PresidentialPardonForm::pardon() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}
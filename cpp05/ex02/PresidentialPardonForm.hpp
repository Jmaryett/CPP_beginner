#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &object);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &object);

	virtual void	execute(Bureaucrat const &executor) const;

	void	pardon() const;

	class CannotExecException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		CannotExecException();
		virtual ~CannotExecException() throw();
		virtual const char*	what() const throw();
	};
};

#endif
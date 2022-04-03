#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &object);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &object);

	virtual void	execute(Bureaucrat const &executor) const;

	void	create() const;

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
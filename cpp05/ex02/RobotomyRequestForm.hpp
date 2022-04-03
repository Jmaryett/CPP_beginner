#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cmath>
#include <time.h>
#include <stdlib.h>

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &object);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &object);

	virtual void	execute(Bureaucrat const &executor) const;

	void	noise() const;
	class CannotExecException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		CannotExecException();
		~CannotExecException() throw();
		virtual const char*	what() const throw();
	};
};


#endif
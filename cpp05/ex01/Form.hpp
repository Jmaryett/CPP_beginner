#ifndef FORM_HPP

#define FORM_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
	const std::string _form;
	bool	_signed;
	const int	_grade_to_sign;
	const int	_grade_to_exec;
public:
	Form(std::string name, int sign, int exec);
	~Form();

	Form(const Form &object);
	Form& operator=(const Form &object);

	std::string	getForm() const;
	int			getGrade(int flag) const;
	bool		ifSigned() const;

	void	beSigned(Bureaucrat *b); // & ??

	// void	increaseGrade(int nb);
	// void	decreseGrade(int nb);
	
	class GradeTooHighException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		void setError();
		virtual const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const Form &object);

#include "Bureaucrat.hpp"

#endif
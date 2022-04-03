#ifndef FORM_HPP

#define FORM_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>

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
	virtual ~Form();

	Form(const Form &object);
	Form& operator=(const Form &object);

	std::string	getForm() const;
	int			getGrade(int flag) const;
	bool		ifSigned() const;
	void	beSigned(Bureaucrat *b);

	virtual void	execute(Bureaucrat const &executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		GradeTooHighException();
		~GradeTooHighException() throw();
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	protected:
		std::string	_error;
	public:
		GradeTooLowException();
		~GradeTooLowException() throw();
		void setError();
		virtual const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const Form &object);

#include "Bureaucrat.hpp"

#endif
#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int	_grade;
public:
	Bureaucrat(std::string name, int nb);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &object);
	Bureaucrat& operator=(const Bureaucrat &object);

	std::string	getName() const;
	int	getGrade() const;
	void	signForm(Form *f); // & ??

	void	increaseGrade(int nb);
	void	decreseGrade(int nb);

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

std::ostream& operator<<(std::ostream &out, const Bureaucrat &object);

#include "Form.hpp"

#endif
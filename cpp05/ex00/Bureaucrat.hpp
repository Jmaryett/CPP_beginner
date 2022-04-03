#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int	_grade;
public:
	Bureaucrat(int nb);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &object);
	Bureaucrat& operator=(const Bureaucrat &object);

	std::string	getName() const;
	int	getGrade() const;

	void	increaseGrade(int nb);
	void	decreseGrade(int nb);

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

std::ostream& operator<<(std::ostream &out, const Bureaucrat &object);

#endif
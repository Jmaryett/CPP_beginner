#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int nb) : _name("Constantine")
{
	std::cout << "Bureaucrat constructor called!\n";
	if(nb > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (nb < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = nb;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called!\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &object) : _name(object.getName())
{
	std::cout << "Bureaucrat copy constructor called!\n";
	*this = object;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &object)
{
	std::cout << "Bureaucrat assignment operator called!\n";
	if (this == &object)
		return (*this);
	_grade = object._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::increaseGrade(int nb)
{
	if (_grade - nb < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= nb;
}

void	Bureaucrat::decreseGrade(int nb)
{
	if (_grade + nb > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += nb;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &object)
{
	out << object.getName() << ", bureaucrat grade " << object.getGrade();
	return (out);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "GradeLow constructor called!\n";
	GradeTooLowException::setError();
}

void Bureaucrat::GradeTooLowException::setError()
{
	_error = "Grade is too low!";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "GradeHigh constructor called!\n";
	_error = "Grade is too high!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int nb) : _name(name)
{
	//std::cout << "Bureaucrat constructor called!\n";
	if(nb > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (nb < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = nb;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor called!\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &object) : _name(object.getName())
{
	//std::cout << "Bureaucrat copy constructor called!\n";
	*this = object;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &object)
{
	//std::cout << "Bureaucrat assignment operator called!\n";
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

void	Bureaucrat::signForm(Form *f)
{
	try
	{
		f->beSigned(this);
		std::cout << _name << " signed " << f->getForm() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign  " << f->getForm() << " because of " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat executed " << form.getForm() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat couldn't execute form.\n";
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
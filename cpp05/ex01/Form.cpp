#include "Form.hpp"

Form::Form( std::string name, int sign, int exec) :  _form(name), _grade_to_sign(sign), _grade_to_exec(exec)
{
	if (_grade_to_exec > 150 || _grade_to_sign > 150)
		throw Form::GradeTooLowException();
	else if (_grade_to_exec < 1 || _grade_to_sign < 1)
		throw Form::GradeTooHighException();
	_signed = false;
}

Form::~Form() {}

Form::Form(const Form &object) : _form(object.getForm()),
_grade_to_sign(object.getGrade(0)), _grade_to_exec(object.getGrade(1))
{
	*this = object;
}

Form& Form::operator=(const Form &object)
{
	if (this == &object)
		return (*this);
	_signed = object._signed;
	return (*this);
}

std::string	Form::getForm() const
{
	return (_form);
}

int	Form::getGrade(int flag) const
{
	switch (flag)
	{
	case 0:
		return (_grade_to_sign);
		break;
	case 1:
		return (_grade_to_exec);
		break;
	default:
		return (0);
		break;
	}
}

bool Form::ifSigned() const
{
	return (_signed);
}

Form::GradeTooLowException::GradeTooLowException()
{
	//std::cout << "GradeLow constructor called!\n";
	GradeTooLowException::setError();
}

void Form::GradeTooLowException::setError()
{
	_error = "(Form)Grade is too low!";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

Form::GradeTooHighException::GradeTooHighException()
{
	//std::cout << "GradeHigh constructor called!\n";
	_error = "(Form)Grade is too high!";
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}

std::ostream& operator<<(std::ostream &out, const Form &object)
{
	out << object.getForm() << ", Form grade to exec " << object.getGrade(1) << ", Form grade to sign "
	<< object.getGrade(0);
	return (out);
}

void	Form::beSigned(Bureaucrat *b)
{
	if(b->getGrade() < Form::getGrade(0))
		throw Form::GradeTooHighException();
	else if (b->getGrade() > Form::getGrade(0))
		throw Form::GradeTooLowException();
	_signed = true;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object) : Form(object)
{
	*this = object;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	if (this == &object)
		return (*this);
	_target = object._target;
	return (*this);
}

const char*	RobotomyRequestForm::CannotExecException::what() const throw()
{
	return (_error.c_str());
}

RobotomyRequestForm::CannotExecException::CannotExecException()
{
	//std::cout << "GradeHigh constructor called!\n";
	_error = "(RobotomyRequestForm)Cannot execute or robotomize!\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!RobotomyRequestForm::ifSigned() || executor.getGrade() != RobotomyRequestForm::getGrade(1))
		throw RobotomyRequestForm::CannotExecException();
	RobotomyRequestForm::noise();
}

void	RobotomyRequestForm::noise() const
{
	srand((unsigned int)time(NULL));
	int robotomiseResult = std::rand() % 2;
	std::cout << "Drilling noises * ";
	if (robotomiseResult)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		throw RobotomyRequestForm::CannotExecException();	
}

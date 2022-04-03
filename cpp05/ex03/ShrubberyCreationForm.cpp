#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object) : Form(object)
{
	*this = object;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object)
{
	if (this == &object)
		return (*this);
	_target = object._target;
	return (*this);
}

const char*	ShrubberyCreationForm::CannotExecException::what() const throw()
{
	return (_error.c_str());
}

ShrubberyCreationForm::CannotExecException::CannotExecException()
{
	//std::cout << "GradeHigh constructor called!\n";
	_error = "(ShrubberyCreationForm)Cannot execute or create file because not signed or grade is wrong!\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!ShrubberyCreationForm::ifSigned() || executor.getGrade() != ShrubberyCreationForm::getGrade(1))
		throw ShrubberyCreationForm::CannotExecException();
	ShrubberyCreationForm::create();
}

void	ShrubberyCreationForm::create() const
{
	std::ofstream	file;
	std::string	file_name = _target + "_shrubbery";

	//std::cout << file_name << "\n";
	file.open(file_name.c_str(), std::ofstream::trunc);
	if (!file.is_open())
		throw ShrubberyCreationForm::CannotExecException(); //{std::cerr << "Can't open file!\n"; return ;}

	file << "     /\\     " << std::endl;
	file << "    /  \\    " << std::endl;
	file << "   /    \\   " << std::endl;
	file << "    /  \\    " << std::endl;
	file << "   /    \\   " << std::endl;
	file << "  /      \\  " << std::endl;
	file << " /        \\ " << std::endl;
	file << "     ||      " << std::endl;
	file << "     ||      " << std::endl;

	file.close();
}

ShrubberyCreationForm::CannotExecException::~CannotExecException() throw() {}
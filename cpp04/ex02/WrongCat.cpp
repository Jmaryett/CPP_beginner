#include "WrongCat.hpp"

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	std::cout << "WrongCat constructor called!\n";
	m_type = name; 
}

WrongCat::WrongCat(const WrongCat &object) : WrongAnimal(object)
{
	std::cout << "WrongCat copy constructor called!\n";
	*this = object;
}

WrongCat& WrongCat::operator=(const WrongCat &object)
{
	std::cout << "WrongCat assignment operator called!\n";
	if (this == &object)
		return(*this);
	m_type = object.m_type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Mmmmmmeeeeeeooooooooooooooooooooow\n";
}
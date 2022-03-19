#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << "WrongAnimal constructor called!\n";
	m_type = name; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
	std::cout << "WrongAnimal copy constructor called!\n";
	*this = object;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &object)
{
	std::cout << "WrongAnimal assignment operator called!\n";
	if (this == &object)
		return(*this);
	m_type = object.m_type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!\n";
}

std::string	WrongAnimal::getType() const
{
	return (m_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "ABOO BOBOBO BOOOO ABOOO\n";
}
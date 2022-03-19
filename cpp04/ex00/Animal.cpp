#include "Animal.hpp"

Animal::Animal(std::string name)
{
	std::cout << "Animal constructor called!\n";
	m_type = name;
}

Animal::Animal(const Animal &object)
{
	std::cout << "Animal copy constructor called!\n";
	*this = object;
}

Animal& Animal::operator=(const Animal &object)
{
	std::cout << "Animal assignment operator called!\n";
	if (this == &object)
		return(*this);
	m_type = object.m_type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!\n";
}

void	Animal::makeSound() const
{
	std::cout << "|no sound for parent|\n";
}

std::string	Animal::getType(void) const {
	return (m_type);
}
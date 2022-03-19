#include "Dog.hpp"

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog constructor called!\n";
	m_type = name; 
}

Dog::Dog(const Dog &object) : Animal(object)
{
	std::cout << "Dog copy constructor called!\n";
	*this = object;
}

Dog& Dog::operator=(const Dog &object)
{
	std::cout << "Dog assignment operator called!\n";
	if (this == &object)
		return(*this);
	m_type = object.m_type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!\n";
}

void	Dog::makeSound() const
{
	std::cout << "Annoying barking\n";
}
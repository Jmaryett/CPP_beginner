#include "Cat.hpp"

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat constructor called!\n";
	m_type = name; 
}

Cat::Cat(const Cat &object) : Animal(object)
{
	std::cout << "Cat copy constructor called!\n";
	*this = object;
}

Cat& Cat::operator=(const Cat &object)
{
	std::cout << "Cat assignment operator called!\n";
	if (this == &object)
		return(*this);
	m_type = object.m_type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meooooowwwwwww\n";
}
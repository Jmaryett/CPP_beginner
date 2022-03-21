#include "Dog.hpp"

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog constructor called!\n";
	m_type = name;
	dog_brain = new Brain();
}

Dog::Dog(const Dog &object) : Animal(object)
{
	std::cout << "Dog copy constructor called!\n";
	dog_brain = 0;
	*this = object;
}

Dog& Dog::operator=(const Dog &object)
{
	std::cout << "Dog assignment operator called!\n";
	if (this == &object)
		return(*this);

	if (dog_brain)
		delete dog_brain;
	if (object.dog_brain)
		dog_brain = new Brain(*object.dog_brain);
	else
		dog_brain = 0;
	m_type = object.m_type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!\n";
	delete dog_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Annoying barking\n";
}

Brain&	Dog::getBrain()
{
	return(*dog_brain);
}
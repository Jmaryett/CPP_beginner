#include "Cat.hpp"

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat constructor called!\n";
	m_type = name;
	cat_brain = new Brain();
}

Cat::Cat(const Cat &object) : Animal(object)
{
	std::cout << "Cat copy constructor called!\n";
	cat_brain = 0;
	*this = object;
}

Cat& Cat::operator=(const Cat &object)
{
	std::cout << "Cat assignment operator called!\n";

	if (this == &object)
		return(*this);
	if (cat_brain)
		delete this->cat_brain;
	if (object.cat_brain)
		cat_brain = new Brain(*object.cat_brain);
	else
		cat_brain = 0;
	m_type = object.m_type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!\n";
	if(cat_brain)	
		delete cat_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meooooowwwwwww\n";
}

Brain&	Cat::getBrain()
{
	return(*cat_brain);
}
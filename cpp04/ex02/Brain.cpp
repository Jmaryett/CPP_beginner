#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called!\n";
	int i = -1;
	while (++i < 100)
		ideas[i] = "same idea for 100 str";
}

Brain::Brain(const Brain &object)
{
	std::cout << "Brain copy constructor called!\n";
	*this = object;
}

Brain& Brain::operator=(const Brain &object)
{
	std::cout << "Brain assignment operator called!\n";
	if (this == &object)
		return(*this);
	for(int i = 0; i < 100; i++)
		ideas[i] = object.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!\n";
}

std::string	Brain::getIdeas(int i)
{
	return(ideas[i]);
}
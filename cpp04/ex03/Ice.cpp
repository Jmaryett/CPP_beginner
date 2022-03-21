#include "Ice.hpp"

Ice::Ice() : AMateria("No type")
{
	std::cout << "Ice constructor called!\n";
	_type = "ice";
}

Ice::Ice(const Ice &object) : AMateria(object)
{
	std::cout << "Ice copy constructor called!\n";
	*this = object;
}

Ice& Ice::operator=(const Ice &object)
{
	std::cout << "Ice assignment operator called!\n";

	if (this == &object)
		return(*this);
	_type = object._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called!\n";
}

Ice*	Ice::clone() const
{
	Ice	*clone = new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
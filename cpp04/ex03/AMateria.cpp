#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria constructor called!\n";
	_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called!\n";
}

AMateria::AMateria(const AMateria &object)
{
	std::cout << "AMateria copy constructor called!\n";
	*this = object;
}

AMateria& AMateria::operator=(const AMateria &object)
{
	std::cout << "AMateria assignment operator called!\n";

	if (this == &object)
		return(*this);
	_type = object._type;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return(_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
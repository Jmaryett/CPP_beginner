#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called!\n";
	//_type = "Cure";
}

Cure::Cure(const Cure &object) : AMateria(object)
{
	std::cout << "Cure copy constructor called!\n";
	*this = object;
}

Cure& Cure::operator=(const Cure &object)
{
	std::cout << "Cure assignment operator called!\n";

	if (this == &object)
		return(*this);
	_type = object._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called!\n";
}

Cure*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
#include "Weapon.hpp"

Weapon::Weapon(std::string _name)
{
	type = _name;
}

Weapon::~Weapon(){}

void	Weapon::setType(std::string newType)
{
	type = newType;
}

const std::string&	Weapon::getType()
{
	return(type);
}
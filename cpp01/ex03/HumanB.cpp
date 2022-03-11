#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
	_weapon = NULL;
}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	_weapon = &wp;
}

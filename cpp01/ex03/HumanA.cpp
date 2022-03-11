#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &wp) : _weapon(wp)
{
	name = _name;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << _weapon.getType() << std::endl;
}

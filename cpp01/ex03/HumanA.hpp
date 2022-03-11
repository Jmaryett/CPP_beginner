#ifndef HUMANA_HPP

#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&_weapon;
	std::string	name;
public:
	HumanA(std::string _name, Weapon &wp); //he takes his weapon here
	~HumanA();
	void	attack();
};

#endif
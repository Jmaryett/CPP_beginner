#ifndef HUMANB_HPP

#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*_weapon;
	std::string	name;
public:
	HumanB(std::string _name); //he doesn't take his weapon here
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &wp);
};

#endif
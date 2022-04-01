#ifndef WEAPON_HPP

#define WEAPON_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string _name);
	~Weapon();
	const std::string&	getType();
	void	setType(std::string newType);
};

#endif
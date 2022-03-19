#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &object);

	DiamondTrap& operator=(const DiamondTrap &object);
	
	~DiamondTrap();

	std::string		getName(void) const;
	void	attack(const std::string &target);
	void	whoAmI();
};

std::ostream& operator<<(std::ostream& out, DiamondTrap const &object);

#endif
#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &object);
	ScavTrap& operator=(const ScavTrap &object);
	~ScavTrap();

	void	guardGate();
};

std::ostream& operator<<(std::ostream& out, ScavTrap const &object);

#endif
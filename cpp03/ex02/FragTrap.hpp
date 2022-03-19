#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &object);
	FragTrap& operator=(const FragTrap &object);
	~FragTrap();

	void	highFivesGuys(void);
};

std::ostream& operator<<(std::ostream& out, FragTrap const &object);



#endif
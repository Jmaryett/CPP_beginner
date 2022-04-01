#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <string.h>

class ClapTrap
{
private:
	std::string		m_name;
	unsigned int	m_hit_points;
	int				m_energy_points;
	int				m_attack_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &object);
	ClapTrap& operator=(const ClapTrap &object);
	~ClapTrap();
	std::string getName(void) const;
	int	getValue(char val[]) const;
	unsigned int	getHealth() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &out, const ClapTrap &object);

#endif
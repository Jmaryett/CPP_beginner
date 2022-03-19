#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <string.h>

class ClapTrap
{
protected:
	std::string	m_name;
	unsigned int	m_hit_points;
	int	m_energy_points;
	int	m_attack_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &object);
	ClapTrap& operator=(const ClapTrap &object);
	~ClapTrap();

	std::string getName(void) const;
	int	getValue(char val[]) const;
	unsigned int	getHealth() const;

	void	setDamage(int nb);
	void	setEnergy(int nb);
	void	setHealth(unsigned int nb);
	void	setName(std::string name);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &out, const ClapTrap &object);

#endif
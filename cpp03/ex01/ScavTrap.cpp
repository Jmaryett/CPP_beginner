#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called!\n";
	//setName(name);
	setHealth(100);
	setEnergy(50);
	setDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object)
{
	std::cout << "ScavTrap cope contructor called!\n";
	*this = object;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &object)
{
	std::cout << "ScavTrap assignment operator called!\n";
	if (this == &object)
		return (*this);
	m_attack_damage = object.m_attack_damage;
	m_energy_points = object.m_energy_points;
	m_hit_points = object.m_hit_points;
	m_name = object.m_name;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << m_name << " is in gate keeper mode!\n";
}

std::ostream& operator<<(std::ostream& out, ScavTrap const &object) 
{
	out << "name is |" << object.getName() << "| health is |" << object.getHealth()
	<< "| damage is |" << object.getValue((char*)"damage") << "| energy is |" << object.getValue((char*)"energy") << "|";
	return (out);
}
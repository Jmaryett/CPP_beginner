#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called!\n";
	//setName(name);
	setHealth(100);
	setEnergy(100);
	setDamage(30);
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object)
{
	std::cout << "FragTrap copy contructor called!\n";
	*this = object;
}

FragTrap& FragTrap::operator=(const FragTrap &object)
{
	std::cout << "FragTrap assignment operator called!\n";
	if (this == &object)
		return (*this);
	m_attack_damage = object.m_attack_damage;
	m_energy_points = object.m_energy_points;
	m_hit_points = object.m_hit_points;
	m_name = object.m_name;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << m_name << " is giving you a high-five!\n";
}

std::ostream& operator<<(std::ostream& out, FragTrap const &object) 
{
	out << "name is |" << object.getName() << "| health is |" << object.getHealth()
	<< "| damage is |" << object.getValue((char*)"damage") << "| energy is |" << object.getValue((char*)"energy") << "|";
	return (out);
}
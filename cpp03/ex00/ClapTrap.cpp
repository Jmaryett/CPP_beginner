#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called\n";
	m_name = name;
	m_hit_points = 10;
	m_energy_points = 10;
	m_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
	std::cout << "Copy constructor called\n";
	*this = object; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap &object)
{
	std::cout << "Assignment operator called\n";
	if (&object == this)
		return (*this);
	m_attack_damage = object.m_attack_damage;
	m_energy_points = object.m_energy_points;
	m_hit_points = object.m_hit_points;
	m_name = object.m_name;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

std::string ClapTrap::getName(void) const
{
	return(m_name);
}

unsigned int ClapTrap::getHealth(void) const
{
	return(m_hit_points);
}

int ClapTrap::getValue(char val[]) const
{
	if (!strcmp(val, "damage"))
		return(m_attack_damage);
	else if (!strcmp(val, "energy"))
		return(m_energy_points);
	else
		return (m_attack_damage);
}

std::ostream& operator<<(std::ostream& out, ClapTrap const &object) 
{
	out << "name is |" << object.getName() << "| health is |" << object.getHealth()
	<< "| damage is |" << object.getValue((char*)"damage") << "| energy is |" << object.getValue((char*)"energy") << "|";
	return (out);
}

void	ClapTrap::attack(const std::string& target)
{
	switch (m_energy_points)
	{
	case 0:
		std::cout << m_name << " doesn't have energy points to attack!\n";
		break;
	default:
		std::cout << m_name << " attacks " << target << " causing " << m_attack_damage
		<< " points of damage!\n";
		m_energy_points -= 1;
		break;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	switch (m_energy_points)
	{
	case 0:
		std::cout << m_name << " doesn't have energy points to heal!\n";
		break;
	default:
		std::cout << m_name << " heals " << amount << " of health.\n";
		if (m_hit_points += amount < 10)
			m_hit_points += amount;
		else
			m_hit_points = 10;
		m_energy_points -= 1;
		break;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << m_name << " gets " << amount << " of damage!\n";
	if (amount > m_hit_points)
		m_hit_points = 0;
	else
		m_hit_points -= amount;
}
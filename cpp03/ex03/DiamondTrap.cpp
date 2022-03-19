#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called!\n";
	_name = name;
	FragTrap::m_attack_damage = 30;
	FragTrap::m_hit_points = 100;
	ScavTrap::m_energy_points = 50;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &object) : ClapTrap(object), ScavTrap(object), FragTrap(object)
{
	std::cout << "DiamondTrap copy constructor called!\n";
	*this = object;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &object)
{
	std::cout << "DiamondTrap assignment operator called!\n";
	this->_name = object.DiamondTrap::getName();
	ClapTrap::m_name = object.ClapTrap::getName();
	FragTrap::m_hit_points = object.getHealth();
	ScavTrap::m_energy_points = object.getValue((char*)"energy");
	FragTrap::m_attack_damage = object.getValue((char*)"damage");
	return (*this);
}

std::string	DiamondTrap::getName(void) const 
{
	return (_name);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name is |" << this->_name << "| Clap name is |" << ClapTrap::getName() << "|\n";
}

std::ostream& operator<<(std::ostream& out, DiamondTrap const &object) 
{
	out << "name is |" << object.DiamondTrap::getName() << "| health is |" << object.getHealth()
	<< "| damage is |" << object.getValue((char*)"damage") << "| energy is |" << object.getValue((char*)"energy") << "|" << std::endl;
	return (out);
}
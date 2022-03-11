#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << name << std::endl;
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

void	Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinzzzzZ...\n";
}
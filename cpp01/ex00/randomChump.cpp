#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	stan;

	stan.setName(name);
	stan.announce();
}
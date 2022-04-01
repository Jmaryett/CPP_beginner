#include "Zombie.hpp"

int	main()
{
	Zombie	*eric;
	
	eric = newZombie("Eric");
	eric->announce();
	randomChump("Stan");
	delete eric; //we call a destructor for zombie
}
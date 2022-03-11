#include "Zombie.hpp"

int	main()
{
	int	i = 0;
	int	N = 10;
	Zombie	*horde;

	horde = zombieHorde(N, "Cartman");
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
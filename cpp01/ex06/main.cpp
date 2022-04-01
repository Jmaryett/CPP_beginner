#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Wrong number of args!\n";
		return (0);
	}
	else
		harl.complain(static_cast<std::string>(av[1]));
	return (0);
}
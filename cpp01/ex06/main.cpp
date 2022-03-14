#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;

	if (ac != 2)
	{
		std::cout << "Wrong number of args!\n";
		return (0);
	}
	else
		karen.complain(static_cast<std::string>(av[1]));
	return (0);
}
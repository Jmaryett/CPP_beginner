#include "Biba.hpp"

int	main(int ac, char **av)
{
	Biba	biba;

	if (ac != 4)
	{
		biba.error("Wrong number of args!\n");
		return (0);
	}
	biba.initStrings(av[2], av[3]);
	biba.openFile(av[1]);
	char	*name_copy = av[1];
	name_copy = std::strcat(name_copy, ".replace");	
	biba.createFile(name_copy);
	biba.replace();
	return (0);
}
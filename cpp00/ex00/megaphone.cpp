#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;

	if (ac == 1)
	{ std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE\n"; return (0); };
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
		}
		if (av[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}

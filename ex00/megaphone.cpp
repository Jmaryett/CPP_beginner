#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;

	if (ac == 1)
		return (0);
	while(av[++i])
	{
		j = 0;
		while(av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
			{
				av[i][j] -= 32;
				std::cout << av[i][j];
			}
			else
				std::cout << av[i][j];
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}

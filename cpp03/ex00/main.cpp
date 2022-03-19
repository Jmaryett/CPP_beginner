#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap("Mahariel");

	clap.attack("Koripheus");
	std::cout << clap << std::endl;
	clap.takeDamage(200);
	std::cout << clap << std::endl;
	clap.beRepaired(12);
	std::cout << clap << std::endl;
}
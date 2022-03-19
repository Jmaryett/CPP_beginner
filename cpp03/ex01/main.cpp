#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("Mahariel");
	ScavTrap	scav("Guardian");

	clap.attack("enemy");
	scav.attack("BIBA");
	scav.guardGate();
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	clap.takeDamage(-3);
	scav.attack("enemy");
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	clap.beRepaired(-5);
	scav.takeDamage(56);
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	scav.beRepaired(90);
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
}
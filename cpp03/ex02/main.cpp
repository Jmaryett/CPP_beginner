#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	clap("Mahariel");
	ScavTrap	scav("Guardian");
	FragTrap	frag("Weirdo");

	clap.attack("enemy");
	scav.guardGate();
	frag.highFivesGuys();
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	std::cout << frag << std::endl;
	clap.takeDamage(-3);
	scav.attack("enemy");
	frag.beRepaired(78);
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	std::cout << frag << std::endl;
	clap.beRepaired(-5);
	scav.takeDamage(56);
	frag.attack("Liberal zoomer");
	frag.takeDamage(-8);
	std::cout << frag << std::endl;
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	scav.beRepaired(90);
	frag.beRepaired(7);
	std::cout << frag << std::endl;
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
}
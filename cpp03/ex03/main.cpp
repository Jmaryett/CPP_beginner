#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	//ClapTrap	clap("Clap_boba");
	//ScavTrap	scav("Scav_biba");
	//FragTrap	frag("Frag_bubu");
	DiamondTrap	diam("Diamond_bobi");

	std::cout << diam;
	//std::cout << clap << scav << frag << diam;
	//scav.attack("bebe");
	diam.attack("bubu");
	diam.whoAmI();
	//std::cout << "diam health = " << diam.getHealth() << " frag health = " << frag.getHealth() << std::endl;
	//std::cout << "diam attack damag = " << diam.getValue((char*)"damage") << " frag attack damag = "
	//<< frag.getValue((char*)"damage") << std::endl;
	//std::cout << " diam energy = " << diam.getValue((char*)"energy") << " scav energy = "
	//<< scav.getValue((char*)"energy");
}
#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void	setName(std::string newName);
	void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
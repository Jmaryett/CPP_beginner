#include "Character.hpp"

Character::Character(std::string name)
{
	std::cout << "Character constructor called!\n";
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

Character::Character(const Character &object)
{
	std::cout << "Character copy constructor called!\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	*this = object;
}

Character& Character::operator=(const Character &object)
{
	std::cout << "Character assignment operator called!\n";

	if (this == &object)
		return(*this);
	// for (int j = 0; j < 4; j++)
	// {
	// 	if (_inventory[j])
	// 		delete _inventory[j];
	// }
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			if (0 <= i && i < 4 && _inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = 0;
			}
			_inventory[i] = object._inventory[i]->clone();
		}
	}
	_name = object._name;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called!\n";
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{	
			delete _inventory[i];
			_inventory[i] = 0;
		}
	}
}

std::string const& Character::getName() const
{
	return(this->_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if(!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx < 4 && _inventory[idx])
		_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < 4 && _inventory[idx])
		if (_inventory[idx])
			_inventory[idx]->use(target);
}
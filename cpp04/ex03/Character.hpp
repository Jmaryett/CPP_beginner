#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"


class Character : public ICharacter
{
private:
	AMateria	*_inventory[4];
	std::string	_name;
public:
	Character(std::string name); //set empty inventory here
	virtual ~Character();
	Character(const Character &object);
	Character& operator=(const Character &object);


	virtual std::string		const& getName() const;
	virtual void			equip(AMateria *m);
	virtual void			unequip(int idx);
	virtual void			use(int idx, ICharacter &target);
};


#endif
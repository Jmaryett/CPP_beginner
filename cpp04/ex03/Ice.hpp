#ifndef ICE_HPP

#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &object);
	Ice& operator=(const Ice &object);
	virtual ~Ice();

	virtual Ice* clone() const;
	virtual void	use(ICharacter &target);
};


#endif
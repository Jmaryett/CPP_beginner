#ifndef ICE_HPP

#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &object);
	Ice& operator=(const Ice &object);
	~Ice();

	virtual Ice* clone() const;
	virtual void	use(ICharacter &target);
};


#endif
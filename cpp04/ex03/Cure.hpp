#ifndef CURE_HPP

#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &object);
	Cure& operator=(const Cure &object);
	~Cure();

	virtual Cure* clone() const;
	virtual void	use(ICharacter &target);
};


#endif
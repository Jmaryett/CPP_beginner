#ifndef CURE_HPP

#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &object);
	Cure& operator=(const Cure &object);
	virtual ~Cure();

	virtual Cure* clone() const;
	virtual void	use(ICharacter &target);
};


#endif
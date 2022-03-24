# ifndef IMATERIASOURCE_HPP

# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource(){};
	virtual void	learnMateria(AMateria *m) = 0;
	virtual AMateria*	createMaterias(std::string const &type) = 0;
};

#endif
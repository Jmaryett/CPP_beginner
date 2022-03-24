# ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*copies[4];
public:
	MateriaSource(/* args */);
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &object);

	MateriaSource& operator=(const MateriaSource &object);
	
	virtual void	learnMateria(AMateria *m);
	virtual AMateria*	createMaterias(std::string const &type);
};

#endif
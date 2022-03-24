#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	std::cout << "MateriaSource constructor called!\n";
	for (int i = 0; i < 4; i++)
		copies[i] = 0;	
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called!\n";
}


MateriaSource::MateriaSource(const MateriaSource &object)
{
	std::cout << "MateriaSource copy constructor called!\n";
	for (int i = 0; i < 4; i++)
		copies[i] = 0;
	*this = object;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &object)
{
	std::cout << "MateriaSource assignment operator called!\n";

	if (this == &object)
		return(*this);
	for (int i = 0; i < 4; i++)
	{
		if (copies[i])
		{
			if (0 <= i && i < 4 && copies[i])
			{
				delete copies[i];
				copies[i] = 0;
			}
			copies[i] = object.copies[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!copies[i])
		{
			copies[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMaterias(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (copies[i])
		{
			if(copies[i]->getType() == type)
				return(copies[i]->clone());
		}
	}
	return (0);
}

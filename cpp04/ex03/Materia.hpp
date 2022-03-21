#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Character.hpp"

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &object);
	AMateria& operator=(const AMateria &object);
	~AMateria();

	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void	use(ICharacter &target);
};


#endif
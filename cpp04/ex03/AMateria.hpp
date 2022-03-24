#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &object);
	AMateria& operator=(const AMateria &object);
	virtual ~AMateria();

	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void	use(ICharacter &target);
};


#endif
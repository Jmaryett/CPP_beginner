#ifndef WRONGCAT_HPP

#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
	std::string	m_type;
public:
	WrongCat(std::string name);
	WrongCat(const WrongCat &object);
	~WrongCat();

	WrongCat& operator=(const WrongCat &object);
	void	makeSound() const;
	std::string	getType(void) const;
};

#endif
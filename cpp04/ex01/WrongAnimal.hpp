#ifndef WRONGANIMAL_HPP

#define WRONGANIMAL_HPP

#include <iomanip>
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	m_type;
public:
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal &object);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal &object);
	void	makeSound() const;
	std::string	getType(void) const;
};

#endif
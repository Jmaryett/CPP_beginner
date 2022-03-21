#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	m_type;
public:
	Animal(std::string name);
	Animal(const Animal &object);
	virtual ~Animal();
	Animal& operator=(const Animal &object);
	virtual void	makeSound() const = 0;
	std::string	getType(void) const;
};

#endif
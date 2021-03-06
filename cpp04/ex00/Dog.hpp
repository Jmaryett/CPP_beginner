#ifndef DOG_HPP

#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(std::string name);
	Dog(const Dog &object);
	virtual ~Dog();

	Dog& operator=(const Dog &object);
	virtual void	makeSound() const;
};

#endif
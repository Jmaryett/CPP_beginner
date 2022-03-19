#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(std::string name);
	Cat(const Cat &object);
	virtual ~Cat();

	Cat& operator=(const Cat &object);
	virtual void	makeSound() const;
};

#endif
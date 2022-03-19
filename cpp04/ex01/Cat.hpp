#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*cat_brain;
public:
	Cat(std::string name);
	Cat(const Cat &object);
	virtual ~Cat();

	Cat& operator=(const Cat &object);
	virtual void	makeSound() const;
};

#endif
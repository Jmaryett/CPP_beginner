#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "Testing virtual methods\n";
	std::cout << std::endl;
	const Animal*	meta = new Animal("parent");
	const Animal*	j = new Dog("Biba");
	const Animal*	i = new Cat("Princess");

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::cout << std::endl;
	std::cout << "Testing without virtual methods\n";
	std::cout << std::endl;
	const WrongAnimal*	james = new WrongAnimal("James");
	const WrongAnimal*	lu = new WrongCat("Lu");

	std::cout << james->getType() << " " << std::endl;
	std::cout << lu->getType() << " " << std::endl;
	james->makeSound();
	lu->makeSound();

	delete james;
	delete lu;

	return (0);
}
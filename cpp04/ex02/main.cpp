#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	//const Animal	*anal = new Animal("Anal");
	const Animal	*cat = new Cat("Catto");
	std::cout << std::endl;
	const Animal	*dog = new Dog("Doggo");
	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();

	delete dog;
	delete cat;

	std::cout << std::endl;

	std::cout << "Check cat deep copy" << std::endl;
	std::cout << std::endl;

	Cat*	catDeep = new Cat("NewCatto");
	std::cout << std::endl;

	std::cout << catDeep->getType() << std::endl;
	const std::string &tmp = catDeep->getBrain().getIdeas(0);
	const std::string &tmp2 = catDeep->getBrain().getIdeas(1);
	std::cout << "Cat first idea: " << tmp << std::endl;
	std::cout << "Cat first idea address: " << &tmp << std::endl;
	std::cout << "Cat second idea address: " << &tmp2 << std::endl;

	std::cout << std::endl;
	Cat*	catDeepCopy = new Cat(*catDeep);
	std::cout << std::endl;

	const std::string &tmp3 = catDeepCopy->getBrain().getIdeas(0);
	const std::string &tmp4 = catDeepCopy->getBrain().getIdeas(1);
	std::cout << "Cat COPY first idea: " << tmp3 << std::endl;
	std::cout << "Cat COPY first idea address: " << &tmp3 << std::endl;
	std::cout << "Cat COPY second idea address: " << &tmp4 << std::endl;

	std::cout << std::endl;

	std::cout << std::endl;
	delete catDeep;
	delete catDeepCopy;

	std::cout << std::endl;

	std::cout << "Check dog deep copy" << std::endl;
	std::cout << std::endl;
	Dog*	dogDeep = new Dog("NewDoggo");
	std::cout << std::endl;

	const std::string &tmp5 = dogDeep->getBrain().getIdeas(0);
	const std::string &tmp6 = dogDeep->getBrain().getIdeas(1);
	std::cout << "dog first idea: " << tmp5 << std::endl;
	std::cout << "dog first ideas address: " << &tmp5 << std::endl;
	std::cout << "dog second idea address: " << &tmp6 << std::endl;

	std::cout << std::endl;
	Dog	*dogDeepCopy = new Dog(*dogDeep);
	std::cout << std::endl;

	const std::string &tmp7 = dogDeepCopy->getBrain().getIdeas(0);
	const std::string &tmp8 = dogDeepCopy->getBrain().getIdeas(1);
	std::cout << "dog COPY first idea: " << tmp7 << std::endl;
	std::cout << "dog COPY first ideas address: " << &tmp7 << std::endl;
	std::cout << "dog COPY second idea address: " << &tmp8 << std::endl;

	std::cout << std::endl;

	std::cout << std::endl;
	delete dogDeep;
	delete dogDeepCopy;
	std::cout << std::endl;

	std::cout << "Checking static copies\n";
	std::cout << std::endl;

	Cat	pussy("Jimmy");

	const std::string &ref3 = pussy.getBrain().getIdeas(0);
	const std::string &ref4 = pussy.getBrain().getIdeas(1);
	std::cout << "Pussy first idea: " << ref3 << std::endl;
	std::cout << "Pussy first idea address: " << &ref3 << std::endl;
	std::cout << "Pussy second idea address: " << &ref4 << std::endl;
	std::cout << std::endl;

	Cat	pussyCopy = pussy;

	const std::string &ref5 = pussyCopy.getBrain().getIdeas(0);
	const std::string &ref6 = pussyCopy.getBrain().getIdeas(1);
	std::cout << "pussyCopy first idea: " << ref5 << std::endl;
	std::cout << "pussyCopy first idea address: " << &ref5 << std::endl;
	std::cout << "pussyCopy second idea address: " << &ref6 << std::endl;
	std::cout << std::endl;

	Dog	doggo("Dudu");
	{
		Dog	doggoCopy = doggo;
	}
	const std::string &ref7 = doggo.getBrain().getIdeas(0);
	const std::string &ref8 = doggo.getBrain().getIdeas(1);
	std::cout << "Doggo first idea: " << ref7 << std::endl;
	std::cout << "Doggo first idea address: " << &ref7 << std::endl;
	std::cout << "Doggo second idea address: " << &ref8 << std::endl;
	std::cout << std::endl;

	return (0);
}
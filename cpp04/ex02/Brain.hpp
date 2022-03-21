#ifndef BRAIN_HPP

#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &object);
	~Brain();

	Brain& operator=(const Brain &object);
	std::string	getIdeas(int i);
};

#endif
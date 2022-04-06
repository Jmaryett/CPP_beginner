#include "Conversion.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{ std::cout << "Wrong number of args!\n"; return (1); }

	Conversion	convert(av[1]);
	convert.checkInput();
}
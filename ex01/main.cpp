#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	PhoneBook	book;
	std::string	input;

	while(std::getline(std::cin, input))
	{
		if (input.empty())
			continue ;
		if(!book.check_input(input)) //&book?????
			return (0);
	}
	return (0);
}
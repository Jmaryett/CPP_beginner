#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	std::string	input;

	std::cout << "You can enter 3 commands: ADD, SEARCH or EXIT\n";
	while(std::getline(std::cin, input))
	{
		if (input.empty())
			continue ;
		if(!book.check_input(input)) //&book?????
			return (0);
	}
	return (0);
}
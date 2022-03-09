#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
}

void	PhoneBook::enter_information(PhoneBook book)
{
	if (index == 8)
	{
		index = 0;
		contact->set_index(index + 1);
		contact->fill_contact();
		index++;
	}
	else
	{
		index = 0;
		contact[index]->set_index(index + 1);
		contact[index]->fill_contact();
		index++;
	}
}

int	PhoneBook::check_input(std::string input, PhoneBook book)
{
	if (input == "ADD")
		enter_information();
	else if (input == "SEARCH")
		return (1);
	else if (input == "EXIT")
		return (0);
	else
	{
		std::cout << "Uknown command" << std::endl;
		return (1);
	}
	return (1);
}
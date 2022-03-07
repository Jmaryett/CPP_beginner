#include "PhoneBook.hpp"

void	PhoneBook::enter_information(PhoneBook book)
{
	int	i = 0;

	while(i < max_contacts - 1)
	{
		book.contact->set_index(i + 1, book.contact[i]);
		book.contact->fill_contact(book.contact[i]);
		i++;
	}
}

int	PhoneBook::check_input(std::string input, PhoneBook book)
{
	if (input == "ADD")
		enter_information(book);
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
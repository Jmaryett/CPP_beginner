#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	nb_of_contacts = 1;
}

void	PhoneBook::enter_information()
{
	std::cout << nb_of_contacts << std::endl;
	if (index > 7 && nb_of_contacts == 8)
		std::cout << "Phone book filled!\n";
	else if (index == 7)
	{
		contact[0].clear_contact();
		contact[0].fill_contact();
		contact[0].set_index(0 + 1);
	}
	else
	{
		contact[index].fill_contact();
		contact[index].set_index(index + 1);
		index++;
		nb_of_contacts++;
	}
}

std::string	PhoneBook::field_len(std::string str) 
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

int	PhoneBook::show_all_info(int i)
{
	if (i < 1 || i > nb_of_contacts)
	{
		std::cout << "No such index. Enter index from 1 to ";
		std::cout << nb_of_contacts << std::endl;
		return (0);
	}
	else
	{
		std::cout << contact[i - 1].get_index() << std::endl;
		std::cout << contact[i - 1].get_firstName() << std::endl;
		std::cout << contact[i - 1].get_lastName() << std::endl;
		std::cout << contact[i - 1].get_nickName() << std::endl;
		std::cout << contact[i - 1].get_phoneNumber() << std::endl;
		std::cout << contact[i - 1].get_darkestSecret() << std::endl;
	}
	return (1);
}

void	PhoneBook::show_contact()
{
	int	tmp = -1; int i;
	std::string	s;

	if(!nb_of_contacts)
	{
		std::cout << "|---------------------------------|" << std::endl;
		std::cout << "|	Empty phone book	  |" << std::endl;
		std::cout << "|---------------------------------|" << std::endl;
	}
	else
	{
		while(++tmp < nb_of_contacts)
		{
			std::cout << "|" << std::setw(10) << contact[tmp].get_index();
			std::cout << "|" << std::setw(10) << field_len(contact[tmp].get_firstName());
			std::cout << "|" << std::setw(10) << field_len(contact[tmp].get_lastName());
			std::cout << "|" << std::setw(10) << field_len(contact[tmp].get_nickName());
			std::cout << "|\n";
		}
		std::cout << "Enter an index to display all info\n";
		std::getline(std::cin, s);
		i = std::atoi(s.c_str());
		show_all_info(i);
	}
}

int	PhoneBook::check_input(std::string input)
{
	if (input == "ADD")
		enter_information();
	else if (input == "SEARCH")
		show_contact();
	else if (input == "EXIT")
		return (0);
	else
		std::cout << "Uknown command. You should enter ADD, SEARCH or EXIT" << std::endl;
	return (1);
}

#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact contact[MAX_CONTACTS];
	int	index;
	int	nb_of_contacts;
public:
	PhoneBook(void);
	int	check_input(std::string input);
	void	enter_information();
	void	show_contact();
	std::string	field_len(std::string str);
	int	show_all_info(int i);
};


#endif
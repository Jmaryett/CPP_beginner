#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Contacts.hpp"

#define max_contacts 8

class PhoneBook
{
private:
	Contacts contact[max_contacts];
	int	index;
public:
	PhoneBook(void);
	int	check_input(std::string input);
	void	enter_information();
};


#endif
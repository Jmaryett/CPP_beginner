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
public:
	int	check_input(std::string input, PhoneBook book);
	void	enter_information(PhoneBook book);
};


#endif
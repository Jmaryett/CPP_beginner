#ifndef CONTACTS_HPP

#define CONTACTS_HPP

#include "PhoneBook.hpp"

class Contacts
{
private:
	int	index;
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;
public:
	void	set_index(int i, Contacts contact);
	void	fill_contact();
};


#endif
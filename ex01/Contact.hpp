#ifndef CONTACTS_HPP

#define CONTACTS_HPP

#include "PhoneBook.hpp"

class Contact
{
private:
	int	index;
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;
public:
	void	set_index(int i);
	void	fill_contact();
	int		get_index();
	std::string	get_firstName();
	std::string	get_lastName();
	std::string	get_nickName();
	std::string	get_phoneNumber();
	std::string	get_darkestSecret();
};


#endif
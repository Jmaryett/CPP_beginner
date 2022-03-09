#include "PhoneBook.hpp"

void	Contact::clear_contact()
{
	m_firstName = "";
	m_lastName = "";
	m_nickName = "";
	m_phoneNumber = "";
	m_darkestSecret = "";
}

void	Contact::fill_contact()
{
	while(m_firstName.empty())
	{
		std::cout << "Enter first name\n";
		std::getline(std::cin, m_firstName);
	}
	while(m_lastName.empty())
	{
		std::cout << "Enter last name\n";
		std::getline(std::cin, m_lastName);
	}
		while(m_nickName.empty())
	{
		std::cout << "Enter nickname\n";
		std::getline(std::cin, m_nickName);
	}
		while(m_phoneNumber.empty())
	{
		std::cout << "Enter phone number\n";
		std::getline(std::cin, m_phoneNumber);
	}
		while(m_darkestSecret.empty())
	{
		std::cout << "Enter darkest secret\n";
		std::getline(std::cin, m_darkestSecret);
	}
	
}

void	Contact::set_index(int i)
{
	index = i;
	//std::cout << index << std::endl;
}

int	Contact::get_index()
{
	return(index);
}

std::string	Contact::get_firstName()
{
	return(m_firstName);
}

std::string	Contact::get_nickName()
{
	return(m_nickName);
}

std::string	Contact::get_lastName()
{
	return(m_lastName);
}

std::string	Contact::get_phoneNumber()
{
	return(m_phoneNumber);
}
std::string	Contact::get_darkestSecret()
{
	return(m_darkestSecret);
}
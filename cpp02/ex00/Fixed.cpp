#include "Fixed.hpp"

const int	Fixed::m_bits = 8;

Fixed::Fixed()
{
	m_store = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	m_store = object.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &object)
{
	if (this == &object)
		return *this;
	std::cout << "Assignment operator called\n";
	m_store = object.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called\n";
	return(m_store);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called\n";
	m_store = raw;
}
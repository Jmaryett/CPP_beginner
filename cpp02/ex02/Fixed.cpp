#include "Fixed.hpp"

const int	Fixed::m_bits = 8;

Fixed::Fixed()
{
	m_fixed = 0;
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &object)
{
	//std::cout << "Copy constructor called\n";
	m_fixed = object.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &object)
{
	if (this == &object)
		return *this;
	//std::cout << "Assignment operator called\n";
	m_fixed = object.getRawBits();
	return (*this);
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called\n";
	m_fixed = nb * 256;
}

Fixed::Fixed(const float nb)
{
	//std::cout << "Float constructor called\n";
	m_fixed = roundf(nb * 256);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits called\n";
	return(m_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits called\n";
	m_fixed = raw;
}

float	Fixed::toFloat(void) const
{
	return(static_cast<float>(m_fixed) / 256);
}

int	Fixed::toInt(void) const 
{
	return(m_fixed / 256);
}

bool	Fixed::operator==(const Fixed& object) const
{
	return(m_fixed == object.m_fixed);
}

bool	Fixed::operator!=(const Fixed& object) const
{
	return(!(m_fixed == object.m_fixed));
}

bool	Fixed::operator>=(const Fixed& object) const
{
	return(m_fixed >= object.m_fixed);
}

bool	Fixed::operator<=(const Fixed& object) const
{
	return(m_fixed <= object.m_fixed);
}

bool	Fixed::operator>(const Fixed& object) const
{
	return(!(m_fixed <= object.m_fixed));
}

bool	Fixed::operator<(const Fixed& object) const
{
	return(!(m_fixed >= object.m_fixed));
}

Fixed	Fixed::operator+(const Fixed& object)
{
	return Fixed(toFloat() + object.toFloat());
	//return (*this);
}

Fixed	Fixed::operator-(const Fixed& object)
{
	return Fixed(toFloat() - object.toFloat());
	//return (*this);
}

Fixed	Fixed::operator*(const Fixed& object)
{
	return Fixed(toFloat() * object.toFloat());
	//return (*this);
}

Fixed	Fixed::operator/(const Fixed& object)
{
	return Fixed(toFloat() / object.toFloat());
	//return (*this);
}

Fixed&	Fixed::operator++(void)
{
	++m_fixed;
	return(*this);
}

Fixed&	Fixed::operator--(void)
{
	--m_fixed;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(toFloat());
	++(*this);
	return(temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(toFloat());
	--(*this);
	return(temp);
}

Fixed const&	Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

Fixed const&	Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a < b)
		return(b);
	else
		return(a);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if(a < b)
		return(b);
	else
		return(a);
}

std::ostream& operator<<(std::ostream& out, Fixed const &object) 
{
	out << object.toFloat();
	return (out);
}
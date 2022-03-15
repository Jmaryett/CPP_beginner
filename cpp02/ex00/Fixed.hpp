#ifndef FIXED_HPP

#define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Fixed
{
private:
	int	m_store;
	static const int	m_bits;
public:
	Fixed(/* args */);
	Fixed(const Fixed &object);
	Fixed&	operator=(const Fixed &object);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};



#endif
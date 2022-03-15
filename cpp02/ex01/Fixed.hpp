#ifndef FIXED_HPP

#define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int	m_store;
	static const int	m_bits;
public:
	Fixed(/* args */); //default constr
	Fixed(const Fixed &object); //copy constr
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed&	operator=(const Fixed &object); //assignm operat
	~Fixed();
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};



#endif
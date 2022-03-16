#ifndef FIXED_HPP

#define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int	m_fixed;
	static const int	m_bits;
public:
	Fixed(/* args */); //default constr
	Fixed(const Fixed &object); //copy constr
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed&	operator=(const Fixed &object); //assignm operat
	
	bool	operator>(const Fixed &object) const;
	bool	operator<(const Fixed &object) const;
	bool	operator>=(const Fixed &object) const;
	bool	operator<=(const Fixed &object) const;
	bool	operator==(const Fixed &object) const;
	bool	operator!=(const Fixed &object) const;

	Fixed	operator+(const Fixed &object);
	Fixed	operator-(const Fixed &object);
	Fixed	operator*(const Fixed &object);
	Fixed	operator/(const Fixed &object);

	Fixed&	operator--(void);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed	operator++(int);

	static Fixed&	min(Fixed &a, Fixed &b);
	static Fixed const&	min (Fixed  const &a, Fixed  const &b);
	static Fixed const&	max (Fixed  const &a, Fixed  const &b);
	static Fixed&	max(Fixed &a, Fixed &b);

	~Fixed();
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &out, const Fixed &object);

#endif
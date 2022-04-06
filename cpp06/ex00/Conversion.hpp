#ifndef CONVERSION_HPP

#define CONVERSION_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <limits>
#include <cstring>

class Conversion
{
private:
	std::string	_nb;
	char	*_av;
	int	_integer;
	float	_float;
	double	_double;
public:
	Conversion();
	Conversion(char *av);
	Conversion(const Conversion &object);
	Conversion& operator=(const Conversion &object);
	~Conversion();

	void	checkInput();
	void	cast();
};


#endif
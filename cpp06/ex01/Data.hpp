#ifndef DATA_HPP

#define DATA_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <limits>
#include <cstring>
#include <stdint.h>

class Data
{
private:
	int	_nb;
public:
	Data();
	Data(int nb);
	Data(const Data &object);
	Data& operator=(const Data &object);
	~Data();

	uintptr_t	serialize(Data *ptr);
	Data*	deserialize(uintptr_t raw);
};


#endif
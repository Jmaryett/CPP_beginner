#ifndef ITER_HPP
#define ITER_HPP

#include <iomanip>
#include <iostream>
#include <string>

template <typename T, typename T1>
void	iter(T *array, T1 length, void (*function)(const T&))
{
	for (int i = 0; i < length; i++)
	{ function(array[i]); }
}

class Check
{
private:
	int	_n;
public:
	Check() : _n(0){};
	~Check(){};
	Check(int n) { _n = n; };
	int	get() const { return this->_n; }
};

std::ostream& operator<<(std::ostream &out, Check const &object)
{
	out << object.get();
	return (out);
}


#endif
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T& value, int nb)
{
	typename T::iterator ret = std::find(std::begin(value), std::end(value), nb);
	if (*ret != nb)
		throw std::exception();
	return (ret);
}

#endif
#ifndef SHABLO_HPP
#define SHABLO_HPP

#include "Templates.hpp"

template <typename T>
void swap(T *a, T *b)
{
	T	tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

template <typename T>
T&	min(T &a, T &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

template <typename T>
T&	max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
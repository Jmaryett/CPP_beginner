#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <exception>

template <class T>
class Array
{
private:
	T	*_element;
public:
	Array(/* args */);
	~Array();
	Array(unsigned int n);
	Array(const Array &object);
	Array& operator=(const Array &object);
	T& operator[](const int index);
	int size() const;
};

template <typename T>
Array<T>::Array()
{
	_element = NULL;
}

template <typename T>
Array<T>::~Array()
{
	if (_element)
		delete [] _element;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (_element)
		delete [] _element;
	if (n > 0)
		_element = new T[n];
	else	
		_element = NULL;
}

template <typename T>
Array<T>::Array(const Array<T> &object)
{
	_element = 0;
	*this = object;	
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &object)
{
	if (_element)
		delete [] _element;
	if (object.size())
	{
		_element = new T(object.size());
		for (int i = 0; i < this->size(); i++)
		{
			_element[i] = object._element[i];
		}
	}
	else
		_element = 0;
	return (*this);
}

template <typename T>
T& Array<T>::operator[](const int index)
{ 
	if (index < 0 || index > this->size())
		throw std::out_of_rangecd();
	return(_element[index]);
}

template <typename T>
int Array<T>::size() const
{
	int i = 0;
	if (_element)
	{
		while (_element[i])
			i++;
	}
	return (i);
}

#endif
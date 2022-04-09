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
	unsigned int	_size;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array &object);
	Array& operator=(const Array &object);
	T& operator[](const int index);
	unsigned int size() const;

	class	MyException : public std::exception
	{
	private:
		std::string	_error;
	public:
		MyException() 
		{
			 _error = "Index is out of range!\n";
		}
		virtual ~MyException() throw() {}
		virtual const char*	what() const throw()
		{ 
			return (_error.c_str()); 
		}
	};
};

template <typename T>
Array<T>::Array()
{
	_element = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	if (_size)
		_element = new T[_size];
	else	
		_element = NULL;
}

template <typename T>
Array<T>::Array(const Array<T> &object)
{
	//_element = NULL;
	*this = object;	
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &object)
{
	if (this != &object)
	{
		if (_size > 0)
			delete [] _element;
		_size = object._size;
		_element = new T[object._size];
		for (unsigned int i = 0; i < _size; i++)
			_element[i] = object._element[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](const int index)
{ 
	if (index < 0 || _size <= static_cast<unsigned int>(index))
		throw MyException();
	return(_element[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T>
Array<T>::~Array()
{
	if (_element)
		delete [] _element;
}

#endif
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <vector>

class Span
{
private:
	unsigned int N;
	std::vector<int>	_store;
public:
	Span(/* args */);
	Span(unsigned int n);
	Span(const Span &object);
	Span& operator=(const Span &object);
	~Span();

	void	addNumber(int n);
	void	addNumber(std::vector<int>::iterator n1, std::vector<int>::iterator n2);
	int	shortestSpan();
	int	longestSpan();
	
	class ContainerFilled : public std::exception
	{
	private:
		std::string _error;
	public:
		ContainerFilled(){_error = "Container filled!";}
		virtual const char*	what() const throw(){ return (_error.c_str()); }
		virtual ~ContainerFilled() throw() {}
	};

	class NotEnoughElems : public std::exception
	{
	private:
		std::string _error;
	public:
		NotEnoughElems(){_error = "Too few elements in array!";}
		virtual const char*	what() const throw(){ return (_error.c_str()); }
		virtual ~NotEnoughElems() throw() {}
	};
};

#endif
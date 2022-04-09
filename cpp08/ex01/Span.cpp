#include "Span.hpp"

Span::Span(/* args */)
{
	N = 0;
}
Span::Span(unsigned int n)
{
	N = n;
}

Span::Span(const Span &object)
{
	*this = object;
}
Span& Span::operator=(const Span &object)
{
	if (this == &object)
		return (*this);
	N = object.N;
	_store.clear();
	_store = object._store;
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (_store.size() == N)
		throw Span::ContainerFilled();
	_store.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator n1, std::vector<int>::iterator n2)
{
	while (n1 < n2)
	{
		if (_store.size() == N)
			throw Span::ContainerFilled();
		_store.push_back(*n1);
		++n1;
	}
}

int	Span::longestSpan()
{
	if (_store.size() <= 1)
		throw Span::NotEnoughElems();
	std::vector<int>::iterator	it_b = _store.begin();
	std::vector<int>::iterator	it_e = _store.end();
	int							maxNb = *(std::max_element(it_b, it_e));
	int							minNb = *(std::min_element(it_b, it_e));

	return (static_cast<long>(maxNb - minNb));
}

int	Span::shortestSpan()
{
	int	min = 0;

	if (_store.size() <= 1)
		throw Span::NotEnoughElems();
	std::vector<int>::iterator	t1 = _store.begin();
	std::vector<int>::iterator	next = _store.begin();
	
	std::sort(t1, _store.end());
	
	++next;
	min = longestSpan();
	while (next != _store.end())
	{
		if ((*next - *t1) < min)
			min = *next - *t1;
		++next;
		++t1;
	}
	return (min);
}
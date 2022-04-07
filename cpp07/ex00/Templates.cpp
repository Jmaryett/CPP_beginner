#include "Templates.hpp"

Templates::Templates(int n)
{ _n = n; }

Templates::~Templates(){}

Templates::Templates(const Templates &object)
{ *this = object; }

Templates&	Templates::operator=(const Templates &object)
{
	if (*this == object)
		return (*this);
	_n = object._n;
	return (*this);
}

bool	Templates::operator==(const Templates& object) const
{
	return(_n == object._n);
}

bool	Templates::operator!=(const Templates& object) const
{
	return(!(_n == object._n));
}

bool	Templates::operator>=(const Templates& object) const
{
	return(_n >= object._n);
}

bool	Templates::operator<=(const Templates& object) const
{
	return(_n <= object._n);
}

bool	Templates::operator>(const Templates& object) const
{
	return(!(_n <= object._n));
}

bool	Templates::operator<(const Templates& object) const
{
	return(!(_n >= object._n));
}

int	Templates::get_n() const
{ return (_n); }

std::ostream& operator<<(std::ostream& out, Templates const &object) 
{
	out << object.get_n();
	return (out);
}

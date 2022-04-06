#include "Data.hpp"

Data::Data() : _nb(0)
{}

Data::Data(int nb)
{ _nb = nb; }

Data::~Data(){}

Data::Data(const Data &object)
{ *this = object; }

Data& Data::operator=(const Data &object)
{
	if (this == &object)
		return (*this);
	_nb = object._nb;
	return (*this);
}

uintptr_t	Data::serialize(Data *ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data*	Data::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}
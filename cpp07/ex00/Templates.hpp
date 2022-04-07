#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include "Shablo.hpp"


class Templates
{
private:
	int	_n;
public:
	Templates() : _n(0) {};
	Templates(int n); //default constr
	Templates(const Templates &object); //copy constr
	Templates&	operator=(const Templates &object); //assignm operat
	~Templates();
	
	bool	operator>(const Templates &object) const;
	bool	operator<(const Templates &object) const;
	bool	operator>=(const Templates &object) const;
	bool	operator<=(const Templates &object) const;
	bool	operator==(const Templates &object) const;
	bool	operator!=(const Templates &object) const;

	int	get_n() const;
};

std::ostream& operator<<(std::ostream &out, const Templates &object);

#endif
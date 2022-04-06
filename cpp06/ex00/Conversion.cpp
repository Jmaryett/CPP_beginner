#include "Conversion.hpp"

Conversion::Conversion() : _nb(NULL), _av(NULL), _integer(0), _float(0), _double(0)
{}

Conversion::Conversion(char *av)
{ _nb = av; _av = av; }

Conversion::~Conversion(){}

Conversion::Conversion(const Conversion &object)
{ *this = object; }

Conversion& Conversion::operator=(const Conversion &object)
{
	if (this == &object)
		return (*this);
	_nb = object._nb;
	_av = object._av;
	_float = object._float;
	_integer = object._integer;
	_double = object._double;
	return (*this);
}

void Conversion::checkInput()
{
	if (_nb.length() == 1 && !std::isdigit(_nb[0]))
		_double = static_cast<double>(_nb[0]);
	else
		_double = atof(_av);

	if (std::isnan(_double) || std::isinf(_double) || _double < 0 || _double > 127)
		std::cout << "char: impossible\n";
	else if (_double < 127 && _double > 31)
		std::cout << "char: " << static_cast<char>(_double) << "\n";
	else
		std::cout << "char: Non displayable\n";

	if (std::isnan(_double) || std::isinf(_double) || _double > std::numeric_limits<int>::max() ||
		_double < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(_double) << "\n";
	
	_float = static_cast<float>(_double);
	std::cout << "float: " << _float;
	if (!(std::isnan(_float) || std::isinf(_float)) && _nb.find('.') == std::string::npos)
		std::cout << ".0";
	std::cout << "f\n";

	std::cout << "double: " << _double;
	if (!(std::isnan(_double) || std::isinf(_double)) && _nb.find('.') == std::string::npos)
		std::cout << ".0\n";
	else
		std::cout << "\n";
}
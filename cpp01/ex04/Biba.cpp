#include "Biba.hpp"

Biba::Biba(){}

Biba::~Biba()
{
	if (file.is_open())
		file.close();
	if (file_copy.is_open())
		file.close();
}

void	Biba::error(std::string s)
{
	std::cout << s;
	exit(1);
}

void	Biba::openFile(char *av)
{
	file.open(av, std::ifstream::in);
	if (!file.is_open())
		error("Can't open file!\n");
}

void	Biba::initStrings(const char *in1, const char *in2)
{
	s1 = in1;
	s2 = in2;
}

void	Biba::createFile(const char *name)
{
	file_copy.open(name, std::ofstream::trunc);
	if (!file_copy.is_open())
		error("Can't open or create file!\n");
}

std::string	Biba::check_if_replace(std::string line)
{
	size_t	pos;
	size_t	toSkip = s1.length();

	pos = line.find(s1);
	if (pos == std::string::npos || s1.empty() || s2.empty())
		return (line);
	else
	{
		while (pos != std::string::npos)
		{
			line = line.erase(pos, toSkip);
			line = line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length() + 1);
		}
	}
	return (line);
}
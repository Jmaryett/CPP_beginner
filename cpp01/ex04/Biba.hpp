#ifndef BIBA_HPP

#define BIBA_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstring>
#include <stdlib.h>

class Biba
{
private:
	std::string	line;
	std::ifstream	file;
	std::ofstream	file_copy;
	std::string	s1;
	std::string	s2;
public:
	Biba();
	~Biba();
	void	openFile(char *av);
	void	error(std::string s);
	void	initStrings(const char *in1, const char *in2);
	void	createFile(const char *name);
	void	replace();
	std::string	check_if_replace(std::string line);
};

#endif
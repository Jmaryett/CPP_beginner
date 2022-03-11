#include <iomanip>
#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of the string " << &str << std::endl;
	std::cout << "Memory address of the pointer " << stringPTR << std::endl;
	std::cout << "Memory address of the reference " << &stringREF << std::endl;
	std::cout << "Value of the string is " << str <<std::endl;
	std::cout << "Value of the pointer is " << *stringPTR << std::endl;
	std::cout << "Value of the reference is " << stringREF << std::endl;
}